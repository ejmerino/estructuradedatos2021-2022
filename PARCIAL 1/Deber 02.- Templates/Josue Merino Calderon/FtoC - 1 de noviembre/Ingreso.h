/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Fahrenheit a Celcius - 1 de noviembre
   Autor:
   -Ednan Josue Merino Calderon
   Fecha de creación: 01/11/2021
   Fecha de modificación: 01/11/2021
*/

#pragma once
#include <iostream>

template <typename T>
class Ingreso {
private:
	T data1;
public:
	Ingreso();
	~Ingreso();
	void set_data1(T);
	T get_data1();
	void to_string();

};
