/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Areas Geometricas - 2 de noviembre
   Autor:
   -Ednan Josue Merino Calderon
   Fecha de creación: 02/07/2021
   Fecha de modificación: 02/07/2021
*/

#pragma once
#include <string>
#include <iostream>
/**
* this class defines objects that contain Datos
*
* @version: 02/11/2021
*/
template <typename J>
class Datos {
private:
	J lado1;
	J lado2;
	J radio;
public:
	/*
	* Constructor for Datos
	*/
	Datos();
	/*
	* Destructor for Datos
	*/
	~Datos();
	/*
	* Setters and Getters
	*/
	void set_lado1(J);
	J get_lado1();
	void set_lado2(J);
	J get_lado2();
	void set_radio(J);
	J get_radio();
};
