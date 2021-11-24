/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Deber 10 - Lista Circular Doblemente Enlazada
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 24/11/2021
   Fecha de modificación: 24/11/2021
*/

#pragma once

#ifndef NODO_H
#define NODO_H
#include<stdlib.h>
class Nodo {
public:
	Nodo(int);
	int getDato();
	void setDato(int);
	Nodo* getSiguiente();
	void setSiguiente(Nodo*);
	Nodo* getAnterior();
	void setAnterior(Nodo*);
private:
	int dato;
	Nodo* siguiente;
	Nodo* anterior;
	
};
#endif

