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

float lambda_valor_iva(float a) {
	auto res = [&](float a) -> float {
		float iva = a * 0.12;
		float total = a + iva;
		float descuento = total * 0.15;
		float precio_con_iva = a + iva;
		float total_final = total - descuento;

		cout << "El subtotal es: " << a << endl;
		cout << "El iva es: " << iva << endl;
		cout << "El total es: " << total << endl;
		cout << "El Precio con iva es: " << precio_con_iva << endl;
		if (precio_con_iva >= 1.0f && precio_con_iva <= 99.0f)
		{
			descuento = (5 * descuento) / 100;
			cout << "El descuento es 5 ";
		}
		else if (precio_con_iva >= 100.0f && precio_con_iva <= 999.0f)
		{
			descuento = (10 * descuento) / 100;
			cout << "El descuento es 10 ";
		}
		else if (precio_con_iva >= 1000.0f && precio_con_iva <= 10000.0f)
		{
			descuento = (15 * descuento) / 100;
			cout << "El descuento es 15 ";
		}
		cout << "\nEl total final es: " << total_final << endl;

		return a;
	};
	return res(a);
}

float lambda_celsius_to_fahrenheit(float a) {
	float res = [=](float x)->float {
		
		std::cout << (x*1.8)+32 << std::endl;
		return 0.0f;
	}(a);
	return res;
}

float lambda_fahrenheit_to_celsius(float a) {
	float res = [=](float x)->float {

		std::cout << (x-32)/1.8 << std::endl;
		return 0.0f;
	}(a);
	return res;
}


float lambda_perrault_hombres(float a, float b) {
	float res = [=, &a,&b](float x, float y) -> float{
		
		std::cout << 50 + ((x - 150) * 3) / 4 + (y - 20) / 4 << std::endl;
		return 0.0f;
	}(a, b);
	return res;
}

float lambda_perrault_mujeres(float a, float b) {
	float res = [=, &a, &b](float x, float y) -> float {

		std::cout << (50 + ((x - 150) * 3) / 4 + (y - 20) / 4) * 0.9 << std::endl;
		return 0.0f;
	}(a, b);
	return res;
}

int main() {
	setlocale(LC_ALL,"");
	float a = 0.0f;
	float b = 0.0f;
	float lambda_valor_iva(float);
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
			system("cls");
			do {
				std::cout << "\nUsted Escogió la Lambda = [=] ( parametros ) -> return { body }" << endl;
				a = Utils::Validation::validation_numbers<float>("\nIngrese un numero: ");
				std::cout << "\n¿Qué desea hacer?" << endl;
				std::cout << "\n1.-Transformacion grados Cº a grados Fº" << endl;
				std::cout << "\n2.-Transformacion grados Fº a grados Cº" << endl;
				option = Utils::Validation::validation_numbers<int>("\nIngrese su opción");
				switch (option) {
				case 1:
					std::cout << "\nLa temperatura en grados Fahrenheit es: ";
					lambda_celsius_to_fahrenheit(a);
					break;
				case 2:
					std::cout << "\nLa temperatura en grados Celsius es: ";
					lambda_fahrenheit_to_celsius(a);
					break;
				default:
					std::cout << "\nIngrese una opción Válida!";
					break;
				}
				std::cout << "\n¿Desea realizar otra vez la operación? (S/N): ";
				std::cin >> option2;
			} while (option2 == 's' or option2 == 'S');
			break;
			
		case 3:
			std::cout << "\nUsted Escogió la Lambda = [&] ( parametros ) -> return { body }" << endl;
			a = Utils::Validation::validation_numbers<float>("\nIngrese un numero");
			lambda_valor_iva(a);
			std::cout << endl;
			system("pause");
			break;
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
			system("cls");
			do {
				std::cout << "\nUsted Escogió la Lambda = [=,&i] ( parametros ) -> return { body }" << endl;
				a = Utils::Validation::validation_numbers<float>("\nIngrese su estatura en cm:");
				b = Utils::Validation::validation_numbers<float>("\nIngrese su edad:");
				std::cout << "\n¿Qué desea hacer?" << endl;
				std::cout << "\n1.-Formula de Perrault Dry para el peso ideal (Hombres)" << endl;
				std::cout << "\n2.-Formula de Perrault Dry para el peso ideal (Mujeres)" << endl;
				option = Utils::Validation::validation_numbers<int>("\nIngrese su opción");
				switch (option) {
				case 1:
					std::cout << "\nSu peso ideal es: ";
					lambda_perrault_hombres(a,b);
					break;
				case 2:
					std::cout << "\nSu peso ideal es: ";
					lambda_perrault_mujeres(a, b);
					break;
				default:
					std::cout << "\nIngrese una opción Válida!";
					break;
				}
				std::cout << "\n¿Desea realizar otra vez la operación? (S/N): ";
				std::cin >> option2;
			} while (option2 == 's' or option2 == 'S');
			break;
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

