/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Porcentaje de 1 numero
   Autores:
   -Pablo David Yanez Alvear
   Fecha de creacion: 01/11/2021
   Fecha de modificacion: 01/11/2021
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
	T porcentaje(Datos<T>&);

};