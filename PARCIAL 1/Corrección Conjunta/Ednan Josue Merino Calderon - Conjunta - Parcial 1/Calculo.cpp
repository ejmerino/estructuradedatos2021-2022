/**
	Universidad de las Fuerzas Armadas - ESPE
	Corrección Prueba Conjunta
	Autor: Josué Merino Calderón
	Fecha de creación: 02/12/2021
	Fecha de modificación: 03/12/2021
**/

#include "Calculo.h"
#include <iostream>
#include <cstdlib>

using namespace std;


Calculo::Calculo(float subtotal, float iva, float total, float descuento) {
	this->subtotal = subtotal;
	this->iva = iva;
	this->total = total;
	this->descuento = descuento;
}
void Calculo::mostrar_factura() {
	cout << endl;
	cout << "\t--------------------------" << endl;
	cout << "\n\tSubTotal: $" << subtotal << endl;
	cout << "\n\tIva(12%): $" << iva << endl;
	cout << "\n\tDescuento: $" << descuento << endl;
	cout << "\n\tTotal: $" << total << endl;
	cout << "\n\t--------------------------" << endl;

}