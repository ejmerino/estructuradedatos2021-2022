/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Operacion con Fracciones
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 28/10/2021
   Fecha de modificación: 28/10/2021
*/

#include "Data.h"
#include <iostream>

/**
*
* @version: 28/10/2021/
*/

using namespace std;

/**
* constructor for basic operations
*
*/

template <typename T>
Data<T>::Data() {}

/**
* destructor for basic operations
*
*/

template <typename T>
Data<T>::~Data() {}
//constructor close

/**
* Setters and Getters
*
*/

template <typename T>
void Data<T>::set_num1(T num1_) {
	this->num1 = num1_;
}

template <typename T>
T Data<T>::get_num1() {
	return num1;
}

template <typename T>
void Data<T>::set_den1(T den1_) {
	this->den1 = den1_;
}

template <typename T>
T Data<T>::get_den1() {
	return den1;
}

template <typename T>
void Data<T>::set_num2(T num2_) {
	this->num2 = num2_;
}

template <typename T>
T Data<T>::get_num2() {
	return num2;
}

template <typename T>
void Data<T>::set_den2(T den2_) {
	this->den2 = den2_;
}

template <typename T>
T Data<T>::get_den2() {
	return den2;
}

template <typename T>
void Data<T>::to_string() {
	cout << "Los valores asignados por el usuario son: " << endl << "Numerador 1: " <<
		Data<T>::get_num1() << endl << "Denominador 1: " << Data<T>::get_den1() << endl <<
		"Numerador 2: " << Data<T>::get_num2() << endl<<"Denominador 2: " << Data<T>::get_den2()<<endl;
}   