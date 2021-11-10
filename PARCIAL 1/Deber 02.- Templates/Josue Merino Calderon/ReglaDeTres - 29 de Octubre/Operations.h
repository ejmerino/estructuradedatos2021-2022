/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Templates
   Autor:
   -Ednan Josue Merino Calderon
   Fecha de creación: 29/10/2021
   Fecha de modificación: 29/10/2021
*/

#pragma once
#include "Datos.h"
/**
* this class defines objects that contain datos
*
* @version: 29/10/2021
*/
template <typename T>
class Operations {
public:
	Operations();
	~Operations();
	/**
	* @brief Function to return Regla de Tres
	*
	* @return Regla de tres
	*/
	T reglaDeTres(Datos<T>&);
	
};