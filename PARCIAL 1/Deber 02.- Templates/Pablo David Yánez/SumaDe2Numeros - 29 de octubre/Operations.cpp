/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Suma de 2 numeros
   Autores:
   -Pablo David Y�nez Alvear
   Fecha de creaci�n: 29/10/2021
   Fecha de modificaci�n: 29/10/2021
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
T Operations<T>::sum(Data<T>& calculation) {
	return (calculation.get_num1()+calculation.get_num2());
}