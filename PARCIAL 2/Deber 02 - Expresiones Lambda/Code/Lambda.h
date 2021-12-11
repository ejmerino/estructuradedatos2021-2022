/*************************************************
	Universidad de las Fuerzas Armadas - ESPE	 *
	Deber 02 - Parcial 2 - Expresiones Lambda    *
	Autores:									 *
	-Jhoel Chicaiza								 *
	-Josué Merino								 *
	-Pablo Yanez							     *
	-Daniel Vizcarra							 *
	-Fecha de Creación: 11 / 12 / 2021			 *
	-Fecha de Modificación: 11 / 12 / 2021		 *
**************************************************/

#pragma once
#include <iostream>

class Lambda {
private: 
	int a;
	int b;
public:
	Lambda();
	float suma_lambda(float,float);
	float resta_lambda(float,float);
	float multiplicacion_lambda(float,float);
	float division_lambda(float,float);
};
