/*************************************************
	Universidad de las Fuerzas Armadas - ESPE	 *
	Deber 02 - Parcial 2 - Expresiones Lambda    *
	Autores:									 *
	-Jhoel Chicaiza								 *
	-Josué Merino								 *
	-Pablo Yanez							     *
	-Daniel Vizcarra							 *
	-Fecha de Creación: 11 / 12 / 2021			 *
	-Fecha de Modificación: 11 / 12 / 2021		 *
**************************************************/

#include "Lambda.h"
#include "Lambda.cpp"
#include <iostream>

using namespace std;

int main() {
	float a = 0.0f;
	float b = 0.0f;
	int option;
	Lambda _lambda;
	cout << "OPERACIONES BASICAS CON EXPRESIONES LAMBDA" << endl;
	cout << "\n1.-Suma";
	cout << "\n2.- Resta";
	cout << "\n3.- Multiplicacion";
	cout << "\n4.-Division";
	cout << "\nQue Operacion desea realizar: ";
	cin >> option;
	switch (option) {
	case 1:
		cout << "\nIngrese un número: ";
		cin >> a;
		cout << "\nIngrese otro numero: ";
		cin >> b;
		_lambda.suma_lambda(a,b);
		break;
	case 2:
		cout << "\nIngrese un número: ";
		cin >> a;
		cout << "\nIngrese otro numero: ";
		cin >> b;
		_lambda.resta_lambda(a,b);
		break;
	case 3:
		cout << "\nIngrese un número: ";
		cin >> a;
		cout << "\nIngrese otro numero: ";
		cin >> b;
		_lambda.multiplicacion_lambda(a, b);
		break;
	case 4:
		cout << "\nIngrese un número: ";
		cin >> a;
		cout << "\nIngrese otro numero: ";
		cin >> b;
		_lambda.division_lambda(a, b);
		break;
	default:
		cout << "Ingrese una opcion valida!";
		break;
	}
	return 0;
}