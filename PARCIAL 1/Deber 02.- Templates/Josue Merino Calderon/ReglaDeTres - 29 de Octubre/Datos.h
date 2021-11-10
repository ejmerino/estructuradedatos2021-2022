/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Templates
   Autor:
   -Ednan Josue Merino Calderon
   Fecha de creación: 29/10/2021
   Fecha de modificación: 29/10/2021
*/

#pragma once
#include <string>

template <typename T>
class Datos {
private:
	T num1;
	T num2;
	T num3;
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
	/**
	* @brief Function to setter the numero 3
	*
	* @param
	*/
	void set_num3(T);
	/**
	* @brief Function to getter the numero 3
	*
	* @return numero 3
	*/
	T get_num3();
	
	/**
	* @brief Function to print in console
	*
	* @param
	*/
	void to_string();
};
