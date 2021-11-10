/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Templates
   Autor:
   -Ednan Josue Merino Calderon
   Fecha de creación: 29/10/2021
   Fecha de modificación: 29/10/2021
*/

#include "Datos.h"
#include <iostream>

/**
*
* @version: 28/10/2021/
*/

using namespace std;

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
void Datos<T>::to_string() {
	cout << "La operacion queda asi: " << Datos<T>::get_num1() << " / " << Datos<T>::get_num2() << " = " << Datos<T>::get_num3() << " / x" << endl;
	cout << endl << "x = " << " ( " << Datos<T>::get_num2() << " * " << Datos<T>::get_num3()<< " ) " << " / " << Datos<T>::get_num1();
}