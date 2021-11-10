/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Operaciones Basicas - 30 de octubre
   Autor:
   -Ednan Josue Merino Calderon
   Fecha de creación: 30/10/2021
   Fecha de modificación: 01/11/2021
*/

#pragma once
#include <string>

template <typename T>
class Datos
{
public:
	/**
	* constructor for data
	*
	*/
	Datos();
	/**
	* desstructor for data
	*
	*/
	~Datos();
	/**
	* @brief Function to setter Numero 1
	*
	* @param
	*/
	void setNum1(T);
	/**
	* @brief Function to etter Numero 1
	*
	* @param
	*/
	T getNum1();
	/**
	* @brief Function to setter Numero 2
	*
	* @param
	*/
	void setNum2(T);
	/**
	* @brief Function to getter Numero 2
	*
	* @param
	*/
	T getNum2();
	/**
	* @brief Function to_string
	*
	* @param
	*/
	void to_string();

protected:
private:
	T num1;
	T num2;
};