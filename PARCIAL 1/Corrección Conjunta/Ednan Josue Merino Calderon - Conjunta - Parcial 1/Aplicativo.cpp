/**
    Universidad de las Fuerzas Armadas - ESPE
    Corrección Prueba Conjunta
    Autor: Josué Merino Calderón
    Fecha de creación: 02/12/2021
    Fecha de modificación: 03/12/2021
**/

#include <string>
#include <limits>
#include <iostream>
#include <regex>
#include "ListaCalculo.h"
#include "Calculo.h"

using namespace std;

ListaCalculo calculo_factura(float subtotal, ListaCalculo totales, Calculo calculo) {
    float iva, total, ulti_total;
    float descuento = 1;
    iva = subtotal * 0.12;
    total = (subtotal + iva);
    if (total >= 1 && total <= 100.0) {
        descuento = 0.05 * total;
    }
    else if (total >= 100.1 && total <= 1000.0) {
        descuento = 0.1 * total;
    }
    else if (total > 1000.0) {
        descuento = 0.15 * total;
    }
    total = total - descuento;
    calculo = Calculo(subtotal, iva, total, descuento);
    totales.insertar_cabeza(calculo);
    return totales;

}

float only_floats(string message, size_t minimum = numeric_limits<float>::min(), size_t maximum = numeric_limits<float>::max()) {
    string input;
    float value;
    do {
        cout << message;
        cin >> input;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        smatch sm;
        bool valid = regex_match(input, sm, regex("^[+-]?([0-9]*[.])?[0-9]+$"));
        if (!valid) continue;
        value = stof(input);
        if (value < minimum || value > maximum) {
            continue;
        }
        break;
    } while (true);
    return value;
}

int main(int argv, char** argc) {

    ListaCalculo total_final;
    Calculo calculo;
	float sub_tot;
	bool continuar = true;
    char opcion = { };
    do {
        sub_tot = only_floats("Ingresar el subtotal: $");
        total_final = calculo_factura(sub_tot, total_final, calculo);
        cout << endl << endl;
        cout << "Calcula otro subtotal? S/N: "; 
        cin >> opcion;
    } while (opcion=='s' or opcion=='S');
    total_final.mostrarCalculos();
	return 0;
}