/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Areas Geometricas - 2 de noviembre
   Autor:
   -Ednan Josue Merino Calderon
   Fecha de creación: 02/07/2021
   Fecha de modificación: 02/07/2021
*/

#include <iostream>
#include <string>
#include "Datos.h"

using namespace std;

template <typename J>
Datos<J>::Datos() {

}

template <typename J>
Datos<J>::~Datos() {

}

template <typename J>
void Datos<J>::set_lado1(J lado_1) {
	this->lado1 = lado_1;
}

template <typename J>
J Datos<J>::get_lado1() {
	return lado1;
}

template <typename J>
void Datos<J>::set_lado2(J lado_2) {
	this->lado2 = lado_2;
}

template <typename J>
J Datos<J>::get_lado2() {
	return lado2;
}

template <typename J>
void Datos<J>::set_radio(J _radio) {
	this->radio = _radio;
}

template <typename J>
J Datos<J>::get_radio() {
	return radio;
}

