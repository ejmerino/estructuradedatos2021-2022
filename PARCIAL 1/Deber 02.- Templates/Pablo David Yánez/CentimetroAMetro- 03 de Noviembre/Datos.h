/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Centimetros a Metros
   Autores:
   -Pablo David Yanez Alvear
   Fecha de creacion: 03/11/2021
   Fecha de modificacion: 03/11/2021
*/




#pragma once
#include <string>

template <typename T>
class Datos {
private:
	T num1;
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
	* @brief Function to setter the numero 1
	*
	* @param
	*/
	void set_num1(T);
	/**
	* @brief Function to getter the numero 1
	*
	* @return the numero 1
	*/
	T get_num1();

};