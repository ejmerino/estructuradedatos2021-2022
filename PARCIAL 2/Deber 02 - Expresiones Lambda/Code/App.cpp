/*
//////////////////////////////////////////////////
	Universidad de las Fuerzas Armadas - ESPE	 ||
	Deber 02 - Parcial 2 - Expresiones Lambda    ||
	Autores:									 ||
	-Jhoel Chicaiza								 ||
	-Josué Merino								 ||
	-Pablo Yanez							     ||
	-Daniel Vizcarra							 ||
	-Fecha de Creación: 11 / 12 / 2021			 ||
	-Fecha de Modificación: 11 / 12 / 2021		 ||
//////////////////////////////////////////////////
*/

#include <iostream>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

using namespace std;

void suma_lambda(float a, float b)
{
	float sum = [](float x, float y) -> float { return x + y ; }(a, b);
}

float resta_lambda(float a, float b) {
	float res = [](float x, float y) -> float { return x - y; }(a, b);
	return res;
}

float multiplicacion_lambda(float a, float b) {
	float res = [](float x, float y) -> float { return x * y; }(a, b);
	return res;
}

float division_lambda(float a, float b) {
	float res = [](float x, float y) -> float { return x / y; }(a, b);
	return res;
}

int main() {
	setlocale(LC_ALL,"");
	float a = 0.0f;
	float b = 0.0f;
	int option;
	cout << "OPERACIONES BASICAS CON EXPRESIONES LAMBDA" << endl;
	cout << "\n1.-Suma";
	cout << "\n2.- Resta";
	cout << "\n3.- Multiplicacion";
	cout << "\n4.-Division";
	cout << "\nQue Operacion desea realizar: ";
	cin >> option;
	cout << "\n";
	switch (option) {
	case 1:
		cout << "\nIngrese un número: ";
		cin >> a;
		cout << "\nIngrese otro numero: ";
		cin >> b;
		suma_lambda(a, b);
		break;
	case 2:
		cout << "\nIngrese un número: ";
		cin >> a;
		cout << "\nIngrese otro numero: ";
		cin >> b;
		resta_lambda(a,b);
		break;
	case 3:
		cout << "\nIngrese un número: ";
		cin >> a;
		cout << "\nIngrese otro numero: ";
		cin >> b;
		multiplicacion_lambda(a, b);
		break;
	case 4:
		cout << "\nIngrese un número: ";
		cin >> a;
		cout << "\nIngrese otro numero: ";
		cin >> b;
		division_lambda(a, b);
		break;
	default:
		cout << "Ingrese una opcion valida!";
		break;
	}
	return 0;
}

