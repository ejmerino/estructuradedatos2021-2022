/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Area de un cuadrado
   Autores:
   -Pablo David Yanez Alvear
   Fecha de creacion: 02/11/2021
   Fecha de modificacion: 02/11/2021
*/



#pragma once
#include <string>

template <typename T>
class Datos {
private:
	T lado;
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
	* @brief Function to setter the lado
	*
	* @param
	*/
	void set_lado(T);
	/**
	* @brief Function to getter the lado
	*
	* @return the lado
	*/
	T get_lado();
};