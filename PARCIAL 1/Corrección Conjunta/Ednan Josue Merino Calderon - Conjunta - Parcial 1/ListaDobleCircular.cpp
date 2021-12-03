#include <stdlib.h>
#include <iostream>
#include "Nodo.h"
#include "ListaDobleCircular.h"

using namespace std;

ListaDobleCircular::ListaDobleCircular() {
	cabeza = NULL;
	cola = NULL;
}

bool ListaDobleCircular::vacio(void) {
	if (cabeza == NULL && cola == NULL) {
		return true;
	}
	else {
		return false;
	}
}

void ListaDobleCircular::insertar(float dato) {
	Nodo* tmp = new Nodo();
	tmp->dato = dato;
	tmp->siguiente = NULL;
	tmp->anterior = NULL;

	if (vacio() == true) {
		cabeza = tmp;
		cabeza->setSiguiente(cabeza);
		cabeza->setAnterior(cabeza);
	}
	else if (cabeza->getSiguiente() == cabeza) {
		cola = tmp;
		cola->setSiguiente(cabeza);
		cola->setAnterior(cabeza);
		cabeza->setSiguiente(cola);
		cabeza->setAnterior(cola);
	}
	else {
		cola->setSiguiente(tmp);
		tmp->setAnterior(cola);
		tmp->setSiguiente(cabeza);
		cabeza->setAnterior(tmp);
		cola = tmp;
	}
}


void ListaDobleCircular::mostrar()
{
	if (cabeza == NULL) {
		std::cout << "La lista esta vacia";
		return;
	}
	else {
		Nodo* tmp = cabeza;
		int indice = 1;
		mostrarRecursivo(tmp, indice);
	}
}

void ListaDobleCircular::mostrarRecursivo(Nodo* valor, int indice) {
	std::cout << "Factura: " << indice++ << "\nTotal Final: " << valor->dato << std::endl;
	if (valor->getSiguiente() != cabeza) {
		mostrarRecursivo(valor->getSiguiente(), indice++);
	}
}

void ListaDobleCircular::eliminar(float dato) {
	if (cabeza == NULL) {
		cout << "No existe ListaDobleCircular\n";
	}
	else if (cabeza->getSiguiente() == cabeza && cabeza->getDato() == dato) {
		cabeza = NULL;
	}
	else {
		Nodo* auxiliar = cabeza;
		while (auxiliar->getSiguiente() != cabeza && auxiliar->getDato() != dato) {
			auxiliar = auxiliar->getSiguiente();
		}
		if (auxiliar == cabeza && auxiliar->getDato() == dato) {
			cabeza->getSiguiente()->setAnterior(cabeza->getAnterior());
			cabeza->getAnterior()->setSiguiente(cabeza->getSiguiente());
			cabeza = cabeza->getSiguiente();
			delete auxiliar;
		}
		else if (auxiliar->getDato() == dato) {
			auxiliar->getAnterior()->setSiguiente(auxiliar->getSiguiente());
			auxiliar->getSiguiente()->setAnterior(auxiliar->getAnterior());
			delete auxiliar;
		}
	}
	std::cout << "Fin";
}