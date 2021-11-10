/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Fahrenheit a Celcius - 1 de noviembre
   Autor:
   -Ednan Josue Merino Calderon
   Fecha de creación: 01/11/2021
   Fecha de modificación: 01/11/2021
*/

#include <iostream>
#include "Ingreso.h"

using namespace std;

template <typename T>
Ingreso<T>::Ingreso() {

}

template <typename T>
Ingreso<T>::~Ingreso() {

}

template <typename T>
void Ingreso<T>::set_data1(T dat1) {
	this->data1 = dat1;
}

template <typename T>
T Ingreso<T>::get_data1() {
	return data1;
}

template <typename T>
void Ingreso<T>::to_string() {
	cout << "Los grados en Celcius son: ";
}