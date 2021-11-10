/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Plantillas (Templates)
   Autor:
   -Daniel Alberto Vizcarra Gaibor
   Fecha de creaci�n: 03/11/2021
   Fecha de modificaci�n: 03/11/2021
*/

#pragma once

#include "Datos.h"

/**
* this class defines objects that contain datos
*
* @version: 03/11/2021
*/
template <typename T>
class Operacion {
public:
	Operacion();
	~Operacion();
	/**
	* @brief Function to return euros
	*
	* @return euros
	*/
	T dolares_euros(Datos<T>&);

};