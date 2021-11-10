/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Porcentaje de 1 numero
   Autores:
   -Pablo David Yanez Alvear
   Fecha de creacion: 01/11/2021
   Fecha de modificacion: 01/11/2021
*/


#pragma once
#include <string>

template <typename T>
class Datos {
private:
	T num1;
	T num2;
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
	/**
	* @brief Function to setter the numero 2
	*
	* @param
	*/
	void set_num2(T);
	/**
	* @brief Function to getter the numero 2
	*
	* @return the numero 2
	*/
	T get_num2();
	
};