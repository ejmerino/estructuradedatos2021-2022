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
	-Fecha de Modificación: 13 / 12 / 2021		 ||
//////////////////////////////////////////////////
*/

#include <iostream>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include "Utils.h"

using namespace std;

float lambda_suma_parametros(float a, float b) {
	float res = [](float x,float y)->float {
		std::cout << x + y << std::endl;
		return 0;
		}(a,b);
	return res;
}

float lambda_resta_parametros(float a, float b) {
	float res = [](float x, float y)->float {
		std::cout << x - y << std::endl;
		return 0;
	}(a, b);
	return res;
}

float lambda_multiplicacion_parametros(float a, float b) {
	float res = [](float x, float y)->float {
		std::cout << x * y << std::endl;
		return 0;
	}(a, b);
	return res;
}

float lambda_division_parametros(float a, float b) {
	float res = [](float x, float y)->float {
		std::cout << x / y << std::endl;
		return 0;
	}(a, b);
	return res;
}

int main() {
	setlocale(LC_ALL,"");
	float a = 0.0f;
	float b = 0.0f;
	int option;
	char option2 = { };
	cout << "UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE";
	do {
		a = Utils::Validation::validation_numbers<float>("\nIngrese un numero");
		b = Utils::Validation::validation_numbers<float>("\nIngrese otro numero");
		cout << "\n¿Qué desea hacer?" << endl;
		cout << "\n1.- Suma";
		cout << "\n2.- Resta";
		cout << "\n3.- Multiplicación";
		cout << "\n4.- División" << endl;
		option = Utils::Validation::validation_numbers<int>("\nIngrese su opción");
		switch (option) {
		case 1:
			cout << "\nLa Suma es: ";
			lambda_suma_parametros(a, b);
			break;
		case 2:
			cout << "\nLa Resta es: ";
			lambda_resta_parametros(a, b);
			break;
		case 3:
			cout << "\nLa Multiplicación es: ";
			lambda_multiplicacion_parametros(a, b);
			break;
		case 4:
			if (b == 0.0f) {
				cout << "No se puede dividir para 0";
			}
			else {
				cout << "\nLa División es: ";
				lambda_division_parametros(a, b);
			}
			break;
		default:
			cout << "\nIngrese una opción Válida!!";
			break;
		}
		cout << "\n¿Desea realizar otra operación? (S/N): ";
		cin >> option2;
		system("cls");
	} while (option2=='s' or option2=='S');
	system("pause");	
}

