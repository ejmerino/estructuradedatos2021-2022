/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Clase 29/10/2021 - Templates
   Autores:
   -Ednan Josue Merino Calderon
   Fecha de creación: 29/10/2021
   Fecha de modificación: 29/10/2021
*/

#include <iostream>
#include "Numero.cpp"

int main() {
	Numero<int> entero;
	Numero<float> flotante;
	Numero<double> real;
	entero.setNum(5);
	flotante.setNum(5.6f);
	real.setNum(3.141592);
	std::cout << "\n Numero de tipo entero: " << entero.getNum();
	std::cout << "\n Numero de tipo float: " << flotante.getNum();
	std::cout << "\n Numero de tipo double: " << real.getNum() << std::endl;
	return 0;
}