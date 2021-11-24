/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Deber 10 - Lista Circular Doblemente Enlazada
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Y�nez Alvear
   Fecha de creaci�n: 24/11/2021
   Fecha de modificaci�n: 24/11/2021
*/
#pragma once

#ifndef LISTACIRCULARDOBLE_H
#define LISTACIRCULARDOBLE_H
#include "Nodo.h"
#include <iostream>
class ListaCircularDoble
	
{
public:
	ListaCircularDoble();
	void insertar(int);
	bool eliminar(int);
	void imprimir();
private:
	Nodo* primero;
	Nodo* ultimo;
};
#endif
