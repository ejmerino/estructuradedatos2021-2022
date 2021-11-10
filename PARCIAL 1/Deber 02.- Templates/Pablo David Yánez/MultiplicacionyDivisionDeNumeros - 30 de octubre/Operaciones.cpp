/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Multiplicacion y Division de 2 numeros
   Autores:
   -Pablo David Yanez Alvear
   Fecha de creacion: 30/10/2021
   Fecha de modificacion: 30/10/2021
*/

#include "Datos.h"
#include "Operaciones.h"
#include <iostream>

using namespace std;

template <typename T>
Operaciones<T>::Operaciones() {}

template <typename T>
T Operaciones<T>::multiplicacion(Datos<T>& calculation)
{
	return calculation.getNum1() * calculation.getNum2();
}


template <typename T>
T Operaciones<T>::division(Datos<T>& calculation)
{
	if (calculation.getNum2() == 0) {
		cout << "No se puede dividir " << endl;
	}
	else
		return calculation.getNum1() / calculation.getNum2();
}

template <typename T>
Operaciones<T>::~Operaciones()
{
	// TODO : implement
}