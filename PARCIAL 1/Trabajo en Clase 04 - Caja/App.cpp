/* Universidad de las Fuerzas Armadas - ESPE
   Software
   NOMBRE DEL PROGRAMA
   Autor:
   -Ednan Josue Merino Calderon
   Fecha de creación: 02/07/2021
   Fecha de modificación: 02/07/2021
*/

#include "Caja.h"
#include "Caja.cpp"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	Caja<int> caja1;
	Caja<int> caja2(3, 5);
	Caja<float> caja3(3.3f, 5.5f, 8.8f);
	cout << "\n";
	cout << "Caja 1: ";
	caja1.mostrarMedidas();
	cout << "\n";
	cout << "Caja 2: ";
	caja2.mostrarMedidas();
	cout << "\n";
	cout << "Caja 3: ";
	caja3.mostrarMedidas();
	return 0;
}