/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Edad Futura - 3 de noviembre
   Autor:
   -Ednan Josue Merino Calderon
   Fecha de creación: 03/07/2021
   Fecha de modificación: 03/07/2021
*/

#include <iostream>
#include "Datos.h"

using namespace std;

template <typename A>
Datos<A>::Datos() {

}

template <typename A>
Datos<A>::~Datos() {

}

template <typename A>
void Datos<A>::set_edad(A _edad) {
	this->edad = _edad;
}

template <typename A>
A Datos<A>::get_edad() {
	return edad;
}

template <typename A>
void Datos<A>::set_anio(A _anio) {
	this->anio = _anio;
}

template <typename A>
A Datos<A>::get_anio() {
	return anio;
}

template <typename A>
void Datos<A>::to_string1() {
	cout << "Usted tendra ";
}

template <typename A>
void Datos<A>::to_string2() {
	cout << "Usted tenia ";

}

template <typename A>
void Datos<A>::to_string3() {
	cout << "Usted tiene ";
}

template <typename A>
void Datos<A>::to_string4() {
	cout << "Usted aun no nacia ";
}

template <typename A>
void Datos<A>::to_string5() {
	cout << "Usted nacio en ";
}