/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Plantillas (Templates)
   Autor:
   -Daniel Alberto Vizcarra Gaibor
   Fecha de creación: 31/10/2021
   Fecha de modificación: 31/10/2021
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
* @version: 31/10/2021
*/

int main() {

	float num1;

	Operacion<float> _operacion;

	Datos<float> _datos;

	char option = { };

	do {

		cout << "Ingrese un numero: ";
		cin >> num1;
		

		_datos.set_num1(num1);
	

		cout << endl << endl << "El valor absoluto del numero ingresado es:" << endl << endl << _operacion.absoluto(_datos);

		cout << endl << endl << "Desea realizar una nueva operacion? (S/N) " << endl;
		cin >> option;

		system("cls");

	} while (option == 's' or option == 'S');

	system("pause");

	return 0;
}