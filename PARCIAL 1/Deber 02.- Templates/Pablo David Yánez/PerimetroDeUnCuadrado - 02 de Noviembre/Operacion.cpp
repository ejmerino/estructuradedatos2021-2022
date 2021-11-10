/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Area de un cuadrado
   Autores:
   -Pablo David Yanez Alvear
   Fecha de creacion: 02/11/2021
   Fecha de modificacion: 02/11/2021
*/


#include "Datos.h"
#include "Operacion.h"
#include <iostream>

/**
*
* @version: 02/11/2021
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
T Operacion<T>::perimetro(Datos<T>& calculation) {
	return ((calculation.get_lado())*4);
}