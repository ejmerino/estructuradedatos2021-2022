/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Sobrecarga de Operadores
   Autor:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Y�nez Alvear

   Fecha de creaci�n: 04/11/2021
   Fecha de modificaci�n: 05/11/2021
*/

#include "Datos.h"
#include "Operaciones.h"
#include <iostream>

using namespace std;

Operaciones::Operaciones(){}
Operaciones::~Operaciones(){}
int Operaciones::operator++(int a) {
	return (a + 1);
}
int Operaciones::operator--(int a) {
	return (a - 1);
}

int Operaciones::operator<<(int a) {
	return a;
}

double Operaciones::operator<<(double b) {
	return b;
}
