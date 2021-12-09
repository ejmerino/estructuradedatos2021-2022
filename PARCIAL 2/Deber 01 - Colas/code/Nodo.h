/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Deber 01 - Parcial 02 - Colas
   Autor:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Y�nez Alvear
   Fecha de creaci�n: 09/12/2021
   Fecha de modificaci�n: 09/12/2021
*/

#pragma once
#include <iostream>
#include <cstdlib>

//DEFINICIONES
template <class T>
class Nodo {

private:
	T dato;
	Nodo<T>* siguiente;
	Nodo<T>* anterior;
public:

	Nodo() = default;
	Nodo(T);

	template <class T>
	friend class Lista;
	friend class Cola;

};

//IMPLEMENTACIONES

template <class T>
Nodo<T>::Nodo(T nuevoDato) {
	this->dato = nuevoDato;
}