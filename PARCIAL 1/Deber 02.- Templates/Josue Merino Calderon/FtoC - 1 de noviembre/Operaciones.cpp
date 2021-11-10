/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Fahrenheit a Celcius - 1 de noviembre
   Autor:
   -Ednan Josue Merino Calderon
   Fecha de creación: 01/11/2021
   Fecha de modificación: 01/11/2021
*/

#include <iostream>
#include "Operaciones.h"
#include "Ingreso.h"
#include "Ingreso.cpp"

using namespace std;

template <typename T>
Operaciones<T>::Operaciones() {

}

template <typename T>
Operaciones<T>::~Operaciones() {

}

template <typename T>
T Operaciones<T>::operation(Ingreso<T>& calculation) {
	return ((0.5555555) * (calculation.get_data1() - 32));
}