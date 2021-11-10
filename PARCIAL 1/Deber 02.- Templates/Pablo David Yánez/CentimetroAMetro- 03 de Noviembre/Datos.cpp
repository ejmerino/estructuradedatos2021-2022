/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Centimetros a Metros
   Autores:
   -Pablo David Yanez Alvear
   Fecha de creacion: 03/11/2021
   Fecha de modificacion: 03/11/2021
*/


#include "Datos.h"
#include <iostream>


using namespace std;

/**
*
* @version: 03/11/2021/
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
void Datos<T>::set_num1(T num1_) {
	this->num1 = num1_;
}

template <typename T>
T Datos<T>::get_num1() {
	return num1;
}
