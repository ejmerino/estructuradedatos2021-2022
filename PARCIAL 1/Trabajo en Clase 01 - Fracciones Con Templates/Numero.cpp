/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Clase 29/10/2021 - Templates
   Autores:
   -Ednan Josue Merino Calderon
   Fecha de creación: 29/10/2021
   Fecha de modificación: 29/10/2021
*/

#include <iostream>
#include "Numero.h"

template <typename T>
void Numero<T>::setNum(T n) {
	this->num = n;
}
template <typename T>
T Numero<T>::getNum() const {
	return this->num;
}