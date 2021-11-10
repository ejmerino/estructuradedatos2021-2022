/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Promedio de 2 numeros
   Autores:
   -Pablo David Yanez Alvear
   Fecha de creacion: 31/10/2021
   Fecha de modificacion: 31/10/2021
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