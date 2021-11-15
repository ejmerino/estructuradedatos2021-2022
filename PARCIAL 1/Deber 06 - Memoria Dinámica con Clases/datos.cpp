/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Templates
   Autor:
   -Ednan Josue Merino Calderon
   Fecha de creación: 14/11/2021
   Fecha de modificación: 14/11/2021
*/


#include <iostream>

/**
*
* @version: 14/11/2021
*/

using namespace std;

/**
* constructor for Datos
*
*/

template <typename T>
datos<T>::datos() {}

/**
* destructor for Datos
*
*/

template <typename T>
datos<T>::~datos() {}
//constructor close

/**
* Setters and Getters
*
*/

template <typename T>
void datos<T>::set_d(T d_) {
	this->d = d_;
}

template <typename T>
T datos<T>::get_d() {
	return d;
}
