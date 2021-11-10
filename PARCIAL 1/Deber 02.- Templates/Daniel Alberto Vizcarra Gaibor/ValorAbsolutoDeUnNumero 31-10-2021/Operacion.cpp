/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Plantillas (Templates)
   Autor:
   -Daniel Alberto Vizcarra Gaibor
   Fecha de creación: 31/10/2021
   Fecha de modificación: 31/10/2021
*/

#include "Datos.h"
#include "Operacion.h"
#include <iostream>

/**
*
* @version: 31/10/2021
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
T Operacion<T>::absoluto(Datos<T>& calculation) {

	if (calculation.get_num1() < 0) {

		return (calculation.get_num1() * -1);

	}

	else {

		return (calculation.get_num1());
	}
	
}