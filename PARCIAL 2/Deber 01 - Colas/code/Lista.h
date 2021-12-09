/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Deber 01 - Parcial 02 - Colas
   Autor:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 09/12/2021
   Fecha de modificación: 09/12/2021
*/

#pragma once
#include "Nodo.h"
#include <iostream>
#include <cstdlib>

using namespace std;

template <class T>
class Lista {
protected:
	Nodo<T>* primero;
	Nodo<T>* ultimo;
	Nodo<T>* nuevoNodo;
	int size;
public:
	Lista();
	bool estaVacia();
	bool buscar(const T&) const;
	void push(const T&);
	void agregarPorCola(const T&);
	void agregar(const T&, const T&);
	void eliminarPorCabeza();
	void pop();
	void eliminar(const T&);
	int getSize();

	void mostrar();
};

template <class T>
Lista<T>::Lista() {
	this->primero = NULL;
	this->ultimo = NULL;
	this->size = 0;
}

template <class T>
bool Lista<T>::buscar(const T& datoBuscado) const {
	Nodo<T>* p;
	bool encontrado = false;
	p = primero;
	while (!encontrado) {
		if (p->dato == datoBuscado)
			encontrado = true;
		else
			p = p->siguiente;
	}

	return encontrado;
}

template <class T>
bool Lista<T>::estaVacia() {
	return(this->primero == NULL);
}

template <class T>
void Lista<T>::mostrar() {
	Nodo<T>* p;
	p = primero;
	for (int i = 0; i < size; i++) {
		cout << p->dato << " ";
		p = p->siguiente;
	}
	cout << endl;
	cout << "Dimension de la lista: " << size << endl;
}

template <class T>
void Lista<T>::push(const T& nuevoDato) {
	nuevoNodo = new Nodo<T>(nuevoDato);
	nuevoNodo->siguiente = NULL;
	if (estaVacia()) {
		primero = nuevoNodo;
		ultimo = nuevoNodo;
	}
	else {
		ultimo->siguiente = nuevoNodo;
		nuevoNodo->anterior = ultimo;
		ultimo = nuevoNodo;
	}
	size++;

}

template <class T>
void Lista<T>::agregarPorCola(const T& nuevoDato) {
	nuevoNodo = new Nodo<T>(nuevoDato);
	nuevoNodo->siguiente = primero;

	if (!estaVacia()) {
		primero->anterior = nuevoNodo;
		primero = nuevoNodo;
	}
	else {
		primero = nuevoNodo;
		ultimo = nuevoNodo;
	}
	size++;
}

template <class T>
void Lista<T>::agregar(const T& nuevoDato, const T& dato) {
	nuevoNodo = new Nodo<T>(nuevoDato);
	nuevoNodo->siguiente = NULL;

	Nodo<T>* p;
	Nodo<T>* q;
	p = primero;
	q = primero->siguiente;
	if (estaVacia()) {
		cout << "Por favor agregar por cabeza o por cola antes: " << endl;
	}
	else {
		bool encontrado = false;
		while (!encontrado) {
			if (p->dato == dato) {
				encontrado = true;
				if (q == primero) {
					p->siguiente = nuevoNodo;
					nuevoNodo->anterior = p;
					nuevoNodo->siguiente = primero;
					ultimo = nuevoNodo;
				}
				else {
					p->siguiente = nuevoNodo;
					nuevoNodo->anterior = p;
					nuevoNodo->siguiente = q;
					q->anterior = nuevoNodo;
				}
			}
			else {
				p = q;
				q = q->siguiente;
			}
		}
	}
	size++;
}

template <class T>
void Lista<T>::eliminarPorCabeza() {

	Nodo<T>* p;
	p = ultimo->anterior;
	p->siguiente = primero;
	delete ultimo;
	ultimo = p;

	size--;


}

template <class T>
void Lista<T>::pop() {
	Nodo<T>* p;
	p = primero;
	primero = primero->siguiente;
	delete p;

	size--;
}

template <class T>
void Lista<T>::eliminar(const T& datoBuscado) {

	Nodo<T>* p;
	Nodo<T>* q;
	p = primero;
	q = primero->siguiente;
	bool encontrado = false;
	if (primero == NULL) {
		cout << "No se puede borrar una lista vacia" << endl;
	}
	else {
		while (!encontrado) {
			if (q->dato == datoBuscado) {
				encontrado = true;
				if (q->siguiente = primero) {
					p->siguiente = primero;
					ultimo = p;
				}
				else {
					p->siguiente = q->siguiente;
					q->siguiente->anterior = p;
				}
			}
			else {
				p = q;
				q = q->siguiente;
			}
		}
		delete q;
	}
	size--;
}

template <class T>
int Lista<T>::getSize() {
	return this->size;
}
