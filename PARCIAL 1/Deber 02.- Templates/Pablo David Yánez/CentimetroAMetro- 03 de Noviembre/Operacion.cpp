/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Centimetros a Metros
   Autores:
   -Pablo David Yanez Alvear
   Fecha de creacion: 03/11/2021
   Fecha de modificacion: 03/11/2021
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
T Operacion<T>::transformacion(Datos<T>& calculation) {
	return ((calculation.get_num1())/100);
}