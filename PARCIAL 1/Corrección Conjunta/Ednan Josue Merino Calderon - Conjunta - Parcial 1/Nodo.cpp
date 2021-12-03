/**
    Universidad de las Fuerzas Armadas - ESPE
    Corrección Prueba Conjunta
    Autor: Josué Merino Calderón
    Fecha de creación: 02/12/2021
    Fecha de modificación: 03/12/2021
**/

#include "Nodo.h"
#include "Calculo.h"

template <class T>
Nodo<T>::Nodo(T nuevoDato) {
	this->dato = nuevoDato;
}