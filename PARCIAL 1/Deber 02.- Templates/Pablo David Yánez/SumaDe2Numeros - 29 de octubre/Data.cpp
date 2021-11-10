/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Suma de 2 numeros
   Autores:
   -Pablo David Y�nez Alvear
   Fecha de creaci�n: 29/10/2021
   Fecha de modificaci�n: 29/10/2021
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
void Data<T>::set_num2(T num2_) {
	this->num2 = num2_;
}

template <typename T>
T Data<T>::get_num2() {
	return num2;
}

template <typename T>
void Data<T>::to_string() {
	cout << "Los valores asignados por el usuario son: " << endl << "Numero 1: " <<
		Data<T>::get_num1() << endl <<
		"Numero 2: " << Data<T>::get_num2() << endl;
}   