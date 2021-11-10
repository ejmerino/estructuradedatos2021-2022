/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Areas Geometricas - 2 de noviembre
   Autor:
   -Ednan Josue Merino Calderon
   Fecha de creación: 02/07/2021
   Fecha de modificación: 02/07/2021
*/

#pragma once
#include <iostream>
#include <string>
#include "Datos.h"
/**
* this class defines objects that contain Operaciones
*
* @version: 02/11/2021
*/
template <typename J>
class Operaciones {
private:
public:
	/*
	* Constructor for Operaciones
	*/
	~Operaciones();
	/*
	* Destructor for Operaciones
	*/
	Operaciones();
	/**
	* @brief Function to calcular el area del cuadrado
	*
	* @return Area del Cuadrado
	*/
	J area_cuadrado(Datos<J>&);
	/**
	* @brief Function to calcular el area del rectangulo
	*
	* @return Area del rectangulo
	*/
	J area_rectangulo(Datos<J>&);
	/**
	* @brief Function to calcular el area del triangulo
	*
	* @return Area del triangulo
	*/
	J area_triangulo(Datos<J>&);
	/**
	* @brief Function to calcular el area del circulo
	*
	* @return Area del circulo
	*/
	J area_circulo(Datos<J>&);
};

