/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Sobrecarga de Operadores
   Autor:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear

   Fecha de creación: 04/11/2021
   Fecha de modificación: 05/11/2021
*/

#pragma once

class Operaciones {
public:
	/*
	* Constructor for Operaciones
	*/
	Operaciones();
	/*
	* Destructor for Operaciones
	*/
	~Operaciones();
	/**
	* @brief Function to aumento en uno
	*
	* @return Aumento en uno
	*/
	int operator++(int);
	/**
	* @brief Function to decremento en uno
	*
	* @return Decremento en uno
	*/
	int operator--(int);
	/**
	* @brief Function to imprime tipo int
	*
	* @return Imprime tipo int
	*/
	int operator<<(int);
	/**
	* @brief Function to imprime tipo double
	*
	* @return Imprime tipo double
	*/
	double operator<<(double);
};