/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Sobrecarga de Operadores
   Autor:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear

   Fecha de creación: 04/11/2021
   Fecha de modificación: 05/11/2021
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
