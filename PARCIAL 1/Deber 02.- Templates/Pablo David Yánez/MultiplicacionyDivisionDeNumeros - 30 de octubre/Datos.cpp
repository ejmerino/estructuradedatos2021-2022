/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Multiplicacion y Division de 2 numeros
   Autores:
   -Pablo David Yanez Alvear
   Fecha de creacion: 30/10/2021
   Fecha de modificacion: 30/10/2021
*/

#include<iostream>
#include<stdlib.h>
#include "Datos.h"

using namespace std;

template <typename T>
Datos<T>::Datos()
{
}

template <typename T>
Datos<T>::~Datos()
{
	// TODO : implement
}

template <typename T>
void Datos<T>::setNum1(T newNum1)
{
	this->num1 = newNum1;
}

template <typename T>
T Datos<T>::getNum1()
{
	return num1;
}

template <typename T>
T Datos<T> ::getNum2()
{
	return num2;
}

template <typename T>
void Datos<T>::setNum2(T newNum2)
{
	this->num2 = newNum2;
}

template <typename T>
void Datos<T>::to_string() {
	cout << endl << "Los valores asignados por el usuario son: " << Datos<T>::getNum1() << " y " << Datos<T>::getNum2() << endl;
}