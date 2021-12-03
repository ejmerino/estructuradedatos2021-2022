#include "Operaciones.h"
#include <iostream>

using namespace std;

Operaciones::Operaciones(){}

void Operaciones::generar_iva(float dato) {
	float iva = 12.0;
	total = dato + ((dato * iva) / 100);
	cout << "Su total es de $" << total;
}

void Operaciones::generar_descuento(float total,float descuento) {
    if (total >= 1.0f or total <= 100.0f) {
        descuento = (total * 5) / 100;
    }
    else if (total > 100.0f or total <= 1000) {
        descuento = (total * 10) / 100;
    }
    else if (total > 1000.0f) {
        descuento = (total * 15) / 100;
    }
    
    cout << "Su descuento es de $" << descuento << endl;
}

void Operaciones::generar_total_final(float total,float descuento) {
    total_final = total - descuento;
    cout << "Su Total final es de $" << total_final << endl;
}