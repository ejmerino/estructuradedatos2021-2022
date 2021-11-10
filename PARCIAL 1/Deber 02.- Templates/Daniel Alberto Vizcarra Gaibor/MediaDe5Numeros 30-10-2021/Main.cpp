/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Plantillas (Templates)
   Autor:
   -Daniel Alberto Vizcarra Gaibor
   Fecha de creación: 30/10/2021
   Fecha de modificación: 30/10/2021
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Datos.cpp"
#include "Operacion.cpp"

using namespace std;

/**
* the main function
*
* @version: 30/10/2021
*/

int main() {

	float num1, num2, num3, num4, num5;

	Operacion<float> _operacion;

	Datos<float> _datos;

	char option = { };

	do {

		cout << "Ingrese el Numero 1: ";
		cin >> num1;
		cout << "Ingrese el Numero 2: ";
		cin >> num2;
		cout << "Ingrese el Numero 3: ";
		cin >> num3;
		cout << "Ingrese el Numero 4: ";
		cin >> num4;
		cout << "Ingrese el Numero 5: ";
		cin >> num5;

		_datos.set_num1(num1);
		_datos.set_num2(num2);
		_datos.set_num3(num3);
		_datos.set_num4(num4);
		_datos.set_num5(num5);

		cout << endl << endl << "La media es:" << endl << endl << _operacion.media(_datos);

		cout << endl << endl << "Desea realizar una nueva operacion? (S/N) " << endl;
		cin >> option;

		system("cls");

	} while (option == 's' or option == 'S');

	system("pause");

	return 0;
}