/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Operaciones Basicas - 30 de octubre
   Autor:
   -Ednan Josue Merino Calderon
   Fecha de creación: 30/10/2021
   Fecha de modificación: 01/11/2021
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Datos.cpp"
#include "Operaciones.cpp"

/**
* the main function
*
* @version: 01/11/2021
*/

using namespace std;

int main() {
	float num1, num2;
	Operaciones<float> _operaciones;
	Datos<float> _datos;
	int option = 0;

	do {
		cout << "1. Suma" << endl;
		cout << "2. Resta" << endl;
		cout << "3. Multiplicacion" << endl;
		cout << "4. Division" << endl;
		cout << "5. Salir" << endl;
		cout << endl << "ELIJA UNA OPCION: ";
		cin >> option;
		switch (option) {
		case 1:
			cout << endl << "Ingrese el valor 1: ";
			cin >> num1;
			cout << endl << "Ingrese el valor 2: ";
			cin >> num2;

			_datos.setNum1(num1);
			_datos.setNum2(num2);
			_datos.to_string();

			cout << endl << "Suma: " << _operaciones.suma(_datos) << endl;
			system("pause");
			system("cls");
			break;

		case 2:
			cout << endl << "Ingrese el valor 1: ";
			cin >> num1;
			cout << endl << "Ingrese el valor 2: ";
			cin >> num2;

			_datos.setNum1(num1);
			_datos.setNum2(num2);
			_datos.to_string();

			cout << endl << "Resta: " << _operaciones.resta(_datos) << endl;
			system("pause");
			system("cls");
			break;

		case 3:
			cout << endl << "Ingrese el valor 1: ";
			cin >> num1;
			cout << endl << "Ingrese el valor 2: ";
			cin >> num2;

			_datos.setNum1(num1);
			_datos.setNum2(num2);
			_datos.to_string();

			cout << endl << "Multiplicacion: " << _operaciones.multiplicacion(_datos) << endl;
			system("pause");
			system("cls");
			break;

		case 4:
			cout << endl << "Ingrese el valor 1: ";
			cin >> num1;
			cout << endl << "Ingrese el valor 2: ";
			cin >> num2;

			_datos.setNum1(num1);
			_datos.setNum2(num2);
			_datos.to_string();

			cout << endl << "Division: " << _operaciones.division(_datos) << endl;
			system("pause");
			system("cls");
			break;

		default:
			cout << endl << "Ingrese una opcion correcta." << endl;
			system("pause");
			system("cls");
			break;

		}
	} while (option != 5);
	return 0;
}