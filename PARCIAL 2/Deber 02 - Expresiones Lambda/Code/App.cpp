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
	-Fecha de Modificación: 12 / 12 / 2021		 ||
//////////////////////////////////////////////////
*/

#include <iostream>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int lambda_suma_parametros(int a, int b) {
	int res = [](int x,int y)->int {
		std::cout << x + y << std::endl;
		return 0;
		}(a,b);
	return res;
}

int lambda_suma_capturas(int a, int b) {
	int x = a;
	int y = b;
	int res = [=]()->int {
		std::cout << x + y << std::endl;
		return 0;
		}();
	return res;
}

int main() {
	setlocale(LC_ALL,"");
	lambda_suma_parametros(5, 4);
	lambda_suma_capturas(7, 6);

	int x = 10;
	int y = 5;
	auto sum = [](auto a, auto b) {
		std::cout << a + b << std::endl;
	};
	sum(-10, 10);
	sum(0.7, 0.3);
	sum(std::string("Hola "), std::string("Guapo"));
}

