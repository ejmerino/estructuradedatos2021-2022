/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Plantillas (Templates)
   Autor:
   -Daniel Alberto Vizcarra Gaibor
   Fecha de creación: 03/11/2021
   Fecha de modificación: 03/11/2021
*/

#include "Datos.h"
#include "Operacion.h"
#include <iostream>

/**
*
* @version: 03/11/2021
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
T Operacion<T>::dolares_euros(Datos<T>& calculation) {


	return (calculation.get_num1() * 0.862975);


}