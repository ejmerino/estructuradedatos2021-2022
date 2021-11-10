/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Areas Geometricas - 2 de noviembre
   Autor:
   -Ednan Josue Merino Calderon
   Fecha de creación: 02/07/2021
   Fecha de modificación: 02/07/2021
*/

#include "Datos.h"
#include "Datos.cpp"
#include "Operaciones.h"
#include "Operaciones.cpp"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <limits>
#include <Windows.h>

using namespace std;

int main() {
	double lado1, lado2, radio;
	int option1;
	char option2 = { };
	Datos<double> _dat;
	Operaciones<double> _op;
	do {
		cout << "Programa que calcula areas geometricas" << endl;
		cout << endl << "1.- Cuadrado " << endl;
		cout << "2.- Rectangulo " << endl;
		cout << "3.- Triangulo Rectangulo " << endl;
		cout << "4.- Circulo " << endl;
		cout << endl << "Que area le gustaria obtener? ";
		cin >> option1;
		switch (option1) {
		case 1:
			cout << endl << "Ingrese el valor del lado del cuadrado: ";
			fflush(stdin);
			cin >> lado1;
			_dat.set_lado1(lado1);
			cout << endl << "El area del cuadrado es: " << _op.area_cuadrado(_dat);			
			cout << endl;
		break;
		case 2:
			cout << endl << "Ingrese el valor de un lado del rectangulo: ";
			fflush(stdin);
			cin >> lado1;
			_dat.set_lado1(lado1);
			cout << endl << "Ingrese el valor del otro lado del rectangulo: ";
			fflush(stdin);
			cin >> lado2;
			_dat.set_lado2(lado2);
			cin.ignore();
			cout << endl << "El area del rectangulo es: " << _op.area_rectangulo(_dat);;
			cout << endl;
		break;
		case 3:
			cout << endl << "Ingrese el valor de un lado del triangulo: ";
			fflush(stdin);
			cin >> lado1;
			_dat.set_lado1(lado1);
			cin.ignore();
			cout << endl << "Ingrese el valor del otro lado del triangulo: ";
			fflush(stdin);
			cin >> lado2;
			_dat.set_lado2(lado2);
			cin.ignore();
			cout << endl << "El area del triangulo rectangulo es: " << _op.area_triangulo(_dat);;
			cout << endl;
		break;
		case 4:
			cout << endl << "Ingrese el valor del radio del circulo: ";
			fflush(stdin);
			cin >> radio;
			_dat.set_radio(radio);
			cin.ignore();
			cout << endl << "El area del circulo es: " << _op.area_circulo(_dat);;
			cout << endl;
		break;
		default:
			cout << endl << "Ingrese una opcion correcta!";
		break;
		}

		cout << endl << "Desea realizar una nueva operacion?" << endl;
		cout << endl << "Si: Presione 's'" << endl;
		cout << endl << "No: Presione cualquier otra tecla" << endl;
		cin >> option2;
		system("cls");
		
	} while (option2 == 's' or option2 == 'S');

	system("pause");
	return 0;
}