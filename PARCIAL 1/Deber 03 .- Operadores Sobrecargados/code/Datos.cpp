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

#include <iostream>
#include "Datos.h"

using namespace std;

Datos::Datos(){}
Datos::~Datos(){}

void Datos::set_a(int _a) {
	this->a = _a;
}

int Datos::get_a() {
	return a;
}

void Datos::set_b(double _b) {
	this->b = _b;
}

double Datos::get_b() {
	return b;
}

/*void Datos::set_c(double _c) {
	this->c = _c;
}

double Datos::get_c() {
	return c;
}*/

