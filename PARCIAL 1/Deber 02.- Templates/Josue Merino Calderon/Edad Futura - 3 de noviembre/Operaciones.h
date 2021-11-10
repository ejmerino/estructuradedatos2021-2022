/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Edad Futura - 3 de noviembre
   Autor:
   -Ednan Josue Merino Calderon
   Fecha de creación: 03/07/2021
   Fecha de modificación: 03/07/2021
*/

#pragma once
#include <iostream>
/**
* this class defines objects that contain Operaciones
*
* @version: 03/11/2021
*/
using namespace std;
template <typename A>
class Operaciones {
public:
	/*
	* Constructor for Operaciones
	*/
	Operaciones();
	/*
	* Constructor for Operaciones
	*/
	~Operaciones();
	/**
	* @brief Function to hacer la edad futura
	*
	* @return Edad Futura
	*/
	A edad_futura(Datos<A>&);
};
