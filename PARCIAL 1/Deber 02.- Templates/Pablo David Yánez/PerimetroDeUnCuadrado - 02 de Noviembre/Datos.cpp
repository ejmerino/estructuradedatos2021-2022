/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Area de un cuadrado
   Autores:
   -Pablo David Yanez Alvear
   Fecha de creacion: 02/11/2021
   Fecha de modificacion: 02/11/2021
*/


#include "Datos.h"
#include <iostream>


using namespace std;

/**
*
* @version: 02/11/2021/
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
void Datos<T>::set_lado(T lado_) {
	this->lado = lado_;
}

template <typename T>
T Datos<T>::get_lado() {
	return lado;
}

