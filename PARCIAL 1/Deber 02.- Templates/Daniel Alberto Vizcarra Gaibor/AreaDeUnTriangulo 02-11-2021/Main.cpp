/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Plantillas (Templates)
   Autor:
   -Daniel Alberto Vizcarra Gaibor
   Fecha de creación: 02-11-2021
   Fecha de modificación: 02-11-2021
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
* @version: 02-11-2021
*/

int main() {

	float base, altura;

	Operacion<float> _operacion;

	Datos<float> _datos;

	char option = { };

	do {

		cout << "Ingrese base: ";
		cin >> base;
		cout << "Ingrese altura:";
		cin >> altura;


		_datos.set_base(base);
		_datos.set_altura(altura);


		cout << endl << endl << "El area del triangulo es:" << endl << endl << _operacion.area_triangulo(_datos);

		cout << endl << endl << "Desea realizar una nueva operacion? (S/N) " << endl;
		cin >> option;

		system("cls");

	} while (option == 's' or option == 'S');

	system("pause");

	return 0;
}