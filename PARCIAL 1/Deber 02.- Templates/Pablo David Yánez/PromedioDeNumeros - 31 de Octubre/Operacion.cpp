/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Promedio de 2 numeros
   Autores:
   -Pablo David Yanez Alvear
   Fecha de creacion: 31/10/2021
   Fecha de modificacion: 31/10/2021
*/

#include "Datos.h"
#include "Operacion.h"
#include <iostream>

/**
*
* @version: 30/10/2021
*/

using namespace std;
/**
* constructor for operacion
*
*/
template <typename T>
Operacion<T>::Operacion() {}

/**
* destructor for operacion
*
*/
template <typename T>
Operacion<T>::~Operacion() {}

/**
* @brief Function call the methods that make the operation
*
* @return the add
*/
template <typename T>
T Operacion<T>::promedio(Datos<T>& calculation) {
	return ((calculation.get_num1() + calculation.get_num2())/2);
}