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

#pragma once
#include <iostream>
#include "Nodo.h"

template <typename T>
class Lista {
private:
	Nodo<T>* primero;
	Nodo<T>* ultimo;
	Nodo<T>* nuevoNodo;
public:
	/**
	* constructor for Lista
	*
	*/
	Lista();
	/**
	* @brief Bool the estaVacia
	*
	* @return the estaVacia
	*/
	bool estaVacia();
	/**
	* @brief Function the insertar
	*
	* @return the insertar
	*/
	void insertar(T);
	/**
	* @brief Function the mostrar
	*
	* @return the mostrar
	*/
	void mostrar();
};