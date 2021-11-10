/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Templates
   Autor:
   -Ednan Josue Merino Calderon
   Fecha de creación: 29/10/2021
   Fecha de modificación: 29/10/2021
*/

#include "Datos.h"
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
T Operations<T>::reglaDeTres(Datos<T>& calculation) {
	return (calculation.get_num2() * calculation.get_num3()) / (calculation.get_num1());
}