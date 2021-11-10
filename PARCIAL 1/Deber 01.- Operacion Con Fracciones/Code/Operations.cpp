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
#include "Operations.h"
#include <iostream>

/**
*
* @version: 28/10/2021
*/

using namespace std;
/**
* constructor for operations
*
*/
template <typename T>
Operations<T>::Operations() {}

/**
* destructor for operations
*
*/
template <typename T>
Operations<T>::~Operations() {}

/**
* @brief Function call the methods that make the operation
*
* @return the add
*/
template <typename T>
T Operations<T>::fraccion_sup(Data<T>& calculation) {
	return (calculation.get_num1()*calculation.get_den2())+(calculation.get_num2() * calculation.get_den1());
}

template <typename T>
T Operations<T>::fraccion_inf(Data<T>& calculation) {
	return (calculation.get_den1() +calculation.get_den2());
}


template <typename T>
T Operations<T>::fraccion_result(Data<T>& calculation) {
	return (((calculation.get_num1() * calculation.get_den2()) + (calculation.get_num2() * calculation.get_den1())) / (calculation.get_den1() + calculation.get_den2()));
}