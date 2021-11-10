/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Promedio de 2 numeros
   Autores:
   -Pablo David Yanez Alvear
   Fecha de creacion: 31/10/2021
   Fecha de modificacion: 31/10/2021
*/

#pragma once

#include "Datos.h"

/**
* this class defines objects that contain datos
*
* @version: 30/10/2021
*/
template <typename T>
class Operacion {
public:
	Operacion();
	~Operacion();
	/**
	* @brief Function to return promedio
	*
	* @return media
	*/
	T promedio(Datos<T>&);

};