/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Fahrenheit a Celcius - 1 de noviembre
   Autor:
   -Ednan Josue Merino Calderon
   Fecha de creación: 01/11/2021
   Fecha de modificación: 01/11/2021
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include "Ingreso.h"
#include "Operaciones.h"
#include "Operaciones.cpp"

using namespace std;

int main() {
	double data1;
	char option = {	};
	Operaciones<double> _op;
	Ingreso<double> _in;
	do {
		cout << "Ingrese el Valor en Grados Fahrenheit: ";
		cin >> data1;
		_in.set_data1(data1);
		_in.to_string();
		cout << _op.operation(_in);
		cout << endl << "Desea realizar una nueva operacion? (S/N) " << endl;
		cin >> option;
		system("cls");

	} while (option == 's' or option == 'S');

	system("pause");
	return 0;
}