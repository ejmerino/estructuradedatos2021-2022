/**
	Universidad de las Fuerzas Armadas - ESPE
	Correcci�n Prueba Conjunta
	Autor: Josu� Merino Calder�n
	Fecha de creaci�n: 02/12/2021
	Fecha de modificaci�n: 03/12/2021
**/


#include "ListaCalculo.h"
#include "Calculo.h"


void ListaCalculo::mostrarCalculos() const {

	Nodo<Calculo>* p;
	p = primero;

	for (int i = 0; i < size; i++) {
		p->dato.mostrar_factura();
		p = p->siguiente;
	}
}
