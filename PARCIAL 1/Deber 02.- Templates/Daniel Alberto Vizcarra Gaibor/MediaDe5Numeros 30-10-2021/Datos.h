/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Plantillas (Templates)
   Autor:
   -Daniel Alberto Vizcarra Gaibor
   Fecha de creación: 30/10/2021
   Fecha de modificación: 30/10/2021
*/

#pragma once
#include <string>

template <typename T>
class Datos {
private:
	T num1;
	T num2;
	T num3;
	T num4;
	T num5;
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
	* @brief Function to setter the numero 4
	*
	* @param
	*/
	void set_num4(T);
	/**
	* @brief Function to getter the numero 4
	*
	* @return numero 4
	*/
	T get_num4();
	/**
	* @brief Function to setter the numero 5
	*
	* @param
	*/
	void set_num5(T);
	/**
	* @brief Function to getter the numero 5
	*
	* @return numero 5
	*/
	T get_num5();

};