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
#include "Ingreso.h"

template <typename T>
class Operaciones {
private:
public:
	Operaciones();
	~Operaciones();
	T operation(Ingreso<T>&);
};