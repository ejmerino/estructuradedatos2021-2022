/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Plantillas (Templates)
   Autor:
   -Daniel Alberto Vizcarra Gaibor
   Fecha de creación: 02-11-2021
   Fecha de modificación: 02-11-2021
*/

#pragma once
#include <string>

template <typename T>
class Datos {
private:
	T base;
	T altura;

public:
	/**
	* constructor for datos
	*
	*/
	Datos();
	/**
	* destructor for datos
	*
	*/
	~Datos();
	/**
	* @brief Function to setter base
	*
	* @param
	*/
	void set_base(T);
	/**
	* @brief Function to getter the base
	*
	* @return base
	*/
	T get_base();


	/**
	* @brief Function to setter the altura
	*
	* @param
	*/
	void set_altura(T);
	/**
	* @brief Function to getter altura
	* @return altura
	*/
	T get_altura();


};
