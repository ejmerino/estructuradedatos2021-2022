/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Plantillas (Templates)
   Autor:
   -Daniel Alberto Vizcarra Gaibor
   Fecha de creación: 03/11/2021
   Fecha de modificación: 03/11/2021
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
* @version: 03/11/2021
*/

int main() {

	float num1;

	Operacion<float> _operacion;

	Datos<float> _datos;

	char option = { };

	do {

		cout << "Ingrese cantidad en dolares: ";
		cin >> num1;


		_datos.set_num1(num1);

		cout << endl << endl << "El su dinero en euros es:" << endl << endl << _operacion.dolares_euros(_datos);

		cout << endl << endl << "Desea realizar una nueva operacion? (S/N) " << endl;
		cin >> option;

		system("cls");

	} while (option == 's' or option == 'S');

	system("pause");

	return 0;
}