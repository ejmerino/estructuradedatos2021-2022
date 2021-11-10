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
* this class defines objects that contain Datos
*
* @version: 03/11/2021
*/
template <typename A>
class Datos {
private:
	A edad;
	A anio;
public:
	Datos();
	~Datos();
	/*
	* Setters and Getters
	*/
	void set_edad(A);
	A get_edad();
	void set_anio(A);
	A get_anio();
	/*
	* Function to print in console
	*/
	void to_string1();
	void to_string2();
	void to_string3();
	void to_string4();
	void to_string5();
};

