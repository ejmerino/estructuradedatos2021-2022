/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Plantillas (Templates)
   Autor:
   -Daniel Alberto Vizcarra Gaibor
   Fecha de creación: 30/10/2021
   Fecha de modificación: 30/10/2021
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
	* @brief Function to return media
	*
	* @return media
	*/
	T media(Datos<T>&);

};