/**
	Universidad de las Fuerzas Armadas - ESPE
	Corrección Prueba Conjunta
	Autor: Josué Merino Calderón
	Fecha de creación: 02/12/2021
	Fecha de modificación: 03/12/2021
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
