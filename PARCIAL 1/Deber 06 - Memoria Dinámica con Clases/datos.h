
   
/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Operacion con Fracciones
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 14/11/2021
   Fecha de modificación: 14/11/2021
*/

#pragma once
#include <string>

template <typename T>
class datos {
private:
	T d;
public:
	/**
	* constructor for datos
	*
	*/
	datos();
	/**
	* destructor for datos
	*
	*/
	~datos();
	/**
	* @brief Function to setter the d
	*
	* @param
	*/
	void set_d(T);
	/**
	* @brief Function to getter the d
	*
	* @return the d
	*/
	T get_d();

	void to_string();
};