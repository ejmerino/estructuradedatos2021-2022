/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Suma de 2 numeros
   Autores:
   -Pablo David Y�nez Alvear
   Fecha de creaci�n: 29/10/2021
   Fecha de modificaci�n: 29/10/2021
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Data.cpp"
#include "Operations.cpp"

/**
* the main function
*
* @version: 28/10/2021
*/

int main() {
	float num1, num2;
	Operations<float> _operations;
	Data<float> _data;
	char option = { };
	do {
		cout << "Ingrese 1er numero: ";
		cin >> num1;
		cout << "Ingrese 2do numero: ";
		cin >> num2;

		_data.set_num1(num1);
		_data.set_num2(num2);
		_data.to_string();

		cout << "El resultado es:  = " << _operations.sum(_data) << endl;

		cout << endl << "Desea realizar una nueva operacion? (S/N) "<<endl;
		cin >> option;
		
		system("cls");

	} while (option == 's' or option == 'S');

	system("pause");		
	
	return 0;
}