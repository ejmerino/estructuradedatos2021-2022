/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Area de un cuadrado
   Autores:
   -Pablo David Yanez Alvear
   Fecha de creacion: 02/11/2021
   Fecha de modificacion: 02/11/2021
*/

#pragma once

#include "Datos.h"

/**
* this class defines objects that contain datos
*
* @version: 02/11/2021
*/
template <typename T>
class Operacion {
public:
	Operacion();
	~Operacion();
	/**
	* @brief Function to return area
	*
	* @return media
	*/
	T perimetro(Datos<T>&);

};