/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Multiplicacion y Division de 2 numeros
   Autores:
   -Pablo David Yanez Alvear
   Fecha de creacion: 30/10/2021
   Fecha de modificacion: 30/10/2021
*/

#pragma once
#include "Datos.h"
template <typename T>
class Operaciones
{
public:
	T multiplicacion(Datos<T>&);
	T division(Datos<T>&);
	Operaciones();
	~Operaciones();
};
