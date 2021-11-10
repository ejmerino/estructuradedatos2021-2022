/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Porcentaje de 1 numero
   Autores:
   -Pablo David Yanez Alvear
   Fecha de creacion: 01/11/2021
   Fecha de modificacion: 01/11/2021
*/


#include "Datos.h"
#include "Operacion.h"
#include <iostream>

/**
*
* @version: 01/11/2021
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
T Operacion<T>::porcentaje(Datos<T>& calculation) {
	return ((calculation.get_num1() * calculation.get_num2())/100);
}