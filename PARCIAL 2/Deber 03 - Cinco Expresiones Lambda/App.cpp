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
		return 0.0f;
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
float lambda_porcentaje_parametros(float a, float b) {
	float res = [&a = b, b](float x, float y)->float {
		std::cout << y/100  << std::endl;
		return 0.0f;
	}(a, b);
	return res;
}
float lambda_cmam_parametros(float a, float b) {
	float res = [&a = b, b](float x, float y)->float {
		std::cout << y * 100 << std::endl;
		return 0.0f;
	}(a, b);
	return res;
}

int main() {
	setlocale(LC_ALL,"");
	float a = 0.0f;
	float b = 0.0f;
	int option;
	int main_option_s;
	char option2 = { };
	char option_main = { };
	std::cout << "UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE" << endl;
	do {
		std::cout << "\n¿Qué expresión lambda desea hacer?" << endl;
		std::cout << "\n1.- [] ( parametros ) -> return { body }";
		std::cout << "\n2.- [=] ( parametros ) -> return { body }";
		std::cout << "\n3.- [&] ( parametros ) -> return { body }";
		std::cout << "\n4.- [&, i] ( parametros ) -> return { body }";
		std::cout << "\n5.- [=,&i] ( parametros ) -> return { body }"<<endl;
		main_option_s = Utils::Validation::validation_numbers<int>("\nIngrese su opción");
		switch (main_option_s) {
		case 1:
			system("cls");
			do {
				std::cout << "\nUsted Escogió la Lambda = [] ( parametros ) -> return { body }" << endl;
				a = Utils::Validation::validation_numbers<float>("\nIngrese un numero");
				b = Utils::Validation::validation_numbers<float>("\nIngrese otro numero");
				std::cout << "\n¿Qué desea hacer?" << endl;
				std::cout << "\n1.- Suma";
				std::cout << "\n2.- Resta";
				std::cout << "\n3.- Multiplicación";
				std::cout << "\n4.- División" << endl;
				option = Utils::Validation::validation_numbers<int>("\nIngrese su opción");
				switch (option) {
				case 1:
					std::cout << "\nLa Suma es: ";
					lambda_suma_parametros(a, b);
					break;
				case 2:
					std::cout << "\nLa Resta es: ";
					lambda_resta_parametros(a, b);
					break;
				case 3:
					std::cout << "\nLa Multiplicación es: ";
					lambda_multiplicacion_parametros(a, b);
					break;
				case 4:
					if (b == 0.0f) {
						std::cout << "No se puede dividir para 0";
					}
					else {
						std::cout << "\nLa División es: ";
						lambda_division_parametros(a, b);
					}
					break;
				default:
					std::cout << "\nIngrese una opción Válida!!";
					break;
				}
				std::cout << "\n¿Desea realizar otra operación? (S/N): ";
				std::cin >> option2;
				
			} while (option2 == 's' or option2 == 'S');
			break;
		case 2:
			std::cout << "\nUsted Escogió la Lambda = [=] ( parametros ) -> return { body }" << endl;
		case 3:
			std::cout << "\nUsted Escogió la Lambda = [&] ( parametros ) -> return { body }" << endl;
		case 4:
			system("cls");
			do {
				std::cout << "\nUsted Escogió la Lambda = [&, i] ( parametros ) -> return { body }" << endl;
				b = Utils::Validation::validation_numbers<float>("\nIngrese un numero: ");
				std::cout << "\n¿Qué desea hacer?" << endl;
				std::cout << "\n1.-Sacar el porcentaje de un numero " << endl;
				std::cout << "\n2.-Transformar de (cm) a (m)" << endl;
				option = Utils::Validation::validation_numbers<int>("\nIngrese su opción");
				switch (option) {
				case 1:
					std::cout << "\nPorcentaje es: ";
					lambda_porcentaje_parametros(a,b);
					break;
				case 2:
					std::cout << "\nEl numero tranformado a (m) es: ";
					lambda_cmam_parametros(a, b);
					break;
				default:
					std::cout << "\nIngrese una opción Válida!!";
					break;
				}
				std::cout << "\n¿Desea realizar otra vez la operación? (S/N): ";
				std::cin >> option2;

			} while (option2 == 's' or option2 == 'S');
			break;
		case 5:
			std::cout << "\nUsted Escogió la Lambda = [=,&i] ( parametros ) -> return { body }" << endl;
		default:
			std::cout << "\nIngrese una opción valida!" << endl;
			break;
		}
		system("cls");
		std::cout << "\n¿Desea realizar otra expresión lambda? (S/N): ";
		std::cin >> option_main;
	} while (option_main=='s' or option_main=='S');
	system("exit");
}

