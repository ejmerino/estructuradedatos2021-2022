/* Universidad de las Fuerzas Armadas - ESPE
   Software
	Listas Simples
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Y�nez Alvear
   Fecha de creaci�n: 21/11/2021
   Fecha de modificaci�n: 21/11/2021
*/


#include "Lista.h"
#include "Nodo.h"
#include "Nodo.cpp"
#include <iostream>

/**
*
* @version: 21/11/2021
*/

using namespace std;
/**
* constructor for Lista
*
*/
template <typename T>
Lista<T>::Lista() {
	this->primero = NULL;
	this->ultimo = NULL;
}
/**
* @brief Function call the methods that make the lists
*
* @return the bool
*/
template <typename T>
bool Lista<T>::estaVacia() {
	if (primero == NULL) {
		return true;
	}
	else {
		return false;
	}
}

template <typename T>
void Lista<T>::insertar(T valor) {
	nuevoNodo = new Nodo<T>;
	nuevoNodo->data = valor;
	if (estaVacia()) {
		primero = nuevoNodo;
		ultimo = nuevoNodo;
	}
	else {
		ultimo->vinculo = nuevoNodo;
		ultimo = nuevoNodo;
	}
}

template <typename T>
void Lista <T>::mostrar() {
	Nodo<T>* tmp;
	tmp = primero;
	while (tmp) {
		cout << tmp->data << "--";
		tmp = tmp->vinculo;
	}
	cout << "NULL";
}