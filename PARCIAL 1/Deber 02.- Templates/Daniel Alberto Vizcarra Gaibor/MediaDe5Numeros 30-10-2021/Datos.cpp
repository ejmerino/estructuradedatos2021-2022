/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Plantillas (Templates)
   Autor:
   -Daniel Alberto Vizcarra Gaibor
   Fecha de creaci�n: 30/10/2021
   Fecha de modificaci�n: 30/10/2021
*/

#include "Datos.h"
#include <iostream>


using namespace std;

/**
*
* @version: 30/10/2021/
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

template <typename T>
void Datos<T>::set_num2(T num2_) {
	this->num2 = num2_;
}

template <typename T>
T Datos<T>::get_num2() {
	return num2;
}

template <typename T>
void Datos<T>::set_num3(T num3_) {
	this->num3 = num3_;
}

template <typename T>
T Datos<T>::get_num3() {
	return num3;
}

template <typename T>
void Datos<T>::set_num4(T num4_) {
	this->num4 = num4_;
}

template <typename T>
T Datos<T>::get_num4() {
	return num4;
}

template <typename T>
void Datos<T>::set_num5(T num5_) {
	this->num5 = num5_;
}

template <typename T>
T Datos<T>::get_num5() {
	return num5;
}
