/*****************************************
UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
TALLER 01 - EXPOSICION ORDENAMIENTO INTERNO
Autores: 
- Jhoel Chicaiza
- Josué Merino
- Daniel Vizcarra
- Pablo Yanez
Fecha: 15 / 12 / 2021
******************************************/

#include <iostream>
#include <locale.h>
#include <wchar.h>
#include "Utils.h"

int main() {
	setlocale(LC_ALL, "");
	int option_main;
	std::cout << "UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE" << std::endl;
	std::cout << "\n¿De qué algorítmo desea conocer más?" << std::endl;
	std::cout << "\n1.-Burbuja" << std::endl;
	std::cout << "\n2.-QuickSort" << std::endl;
	std::cout << "\n3.-ShellSort" << std::endl;
	std::cout << "\n4.-Radix" << std::endl;
	option_main = Utils::Validation::validation_numbers<int>("\nIngrese su opción");
	switch (option_main) {
	case 1:
		system("cls");
		std::cout << "Usted Eligió: Ordenamiento Burbuja" << std::endl;
		std::cout << "_______________________________________________________________________________________________________________________________" << std::endl;
		std::cout << "             VENTAJAS                  |                                              DESVENTAJAS                              |" << std::endl;
		std::cout << "_______________________________________|_______________________________________________________________________________________|" << std::endl;
		std::cout << "Popular y Fácil de implementar         | No se comporta adecuadamente con una lista que contenga un número grande de elementos |" << std::endl;
		std::cout << "_______________________________________|_______________________________________________________________________________________|" << std::endl;
		std::cout << "Apropiado para la enseñanza académica  | No es apropiado para aplicaciones y proyectos grandes, profesionales y complejos      |" << std::endl;
		std::cout << "_______________________________________|_______________________________________________________________________________________|" << std::endl;
		std::cout << "Eficaz y sencillo                      | Consume bastante tiempo de computadora                                                |" << std::endl;
		std::cout << "_______________________________________|_______________________________________________________________________________________|" << std::endl;
		system("pause");
		break;
	case 2:
		system("cls");
		std::cout << "Usted Eligió: QuickSort" << std::endl;
		break;
	case 3:
		system("cls");
		std::cout << "Usted Eligió: ShellSort" << std::endl;
		break;
	case 4:
		system("cls");
		std::cout << "Usted Eligió: Ordenamiento Radix" << std::endl;
		std::cout << "______________________________________________________________________________________________________________________________________________________________|" << std::endl;
		std::cout << "                                  VENTAJAS                                            |                           DESVENTAJAS									|" << std::endl;
		std::cout << "______________________________________________________________________________________|_______________________________________________________________________|" << std::endl;
		std::cout << "Es estable, preservando la orden de elementos iguales.                                | No funciona tan bien cuando los números son muy largos, ya que        |" << std::endl;
		std::cout << "______________________________________________________________________________________|_______________________________________________________________________|" << std::endl;
		std::cout << "Funciona en un tiempo lineal, en comparación de varios otros métodos de ordenamiento. | el total detiempo es proporcional a la longitud del número más grande |" << std::endl;
		std::cout << "______________________________________________________________________________________|_______________________________________________________________________|" << std::endl;
		std::cout << "Es particularmente eficiente cuando se tratan con grandes grupos de números cortos.   | y al número de elementos a ordenar.                                   |" << std::endl;
		std::cout << "______________________________________________________________________________________|_______________________________________________________________________|" << std::endl;
		break;
	default:
		std::cout << "ELIJA UNA OPCIÓN VALIDA!" << std::endl;
		break;
	}
	
	return 0;
}