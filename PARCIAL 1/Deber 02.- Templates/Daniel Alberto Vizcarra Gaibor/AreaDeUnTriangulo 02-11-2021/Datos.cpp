/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Plantillas (Templates)
   Autor:
   -Daniel Alberto Vizcarra Gaibor
   Fecha de creación: 02-11-2021
   Fecha de modificación: 02-11-2021
*/

#include "Datos.h"
#include <iostream>


using namespace std;

/**
*
* @version: 02-11-2021
*/


/**
* constructor for Datos
*
*/

template <typename T>
Datos<T>::Datos() {}

/**
* destructor for Datos
*
*/

template <typename T>
Datos<T>::~Datos() {}
//constructor close

/**
* Setters and Getters
*
*/

template <typename T>
void Datos<T>::set_base(T base_) {
	this->base = base_;
}

template <typename T>
T Datos<T>::get_base() {
	return base;
}

template <typename T>
void Datos<T>::set_altura(T altura_) {
	this->altura = altura_;
}

template <typename T>
T Datos<T>::get_altura() {
	return altura;
}