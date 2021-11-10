/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Suma de 2 numeros
   Autores:
   -Pablo David Y�nez Alvear
   Fecha de creaci�n: 29/10/2021
   Fecha de modificaci�n: 29/10/2021
*/

#pragma once
#include "Data.h"
/**
* this class defines objects that contain data
*
* @version: 28/10/2021
*/
template <typename T>
class Operations {
public:
	Operations();
	~Operations();
	/**
	* @brief Funcion que multiplica num1*den2 y suma num2*den1
	*
	* @return the add
	*/
	T sum(Data<T>&);	
	/**
	* @brief Funcion que realiza la division
	*
	* @return the add
	*/
	T sum_result(Data<T>&);


};
