/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Operaciones Basicas - 30 de octubre
   Autor:
   -Ednan Josue Merino Calderon
   Fecha de creación: 30/10/2021
   Fecha de modificación: 01/11/2021
*/

#pragma once
#include "Datos.h"
/**
* this class defines objects that contain data
*
* @version: 01/11/2021
*/

template <typename T>
class Operaciones
{
public:
	/**
	* @brief Function to add two numbers
	*
	* @return suma
	*/
	T suma(Datos<T>&);
	/**
	* @brief Function to substrac two numbers
	*
	* @return resta
	*/
	T resta(Datos<T>&);
	/**
	* @brief Function to multiply two numbers
	*
	* @return multiplicacion
	*/
	T multiplicacion(Datos<T>&);
	/**
	* @brief Function to divide two numbers
	*
	* @return division
	*/
	T division(Datos<T>&);
	/*
	Constructor and Destructure
	*/
	Operaciones();
	~Operaciones();
};
