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
	std::cout << "\n5.-Comparación Ordenamientos Internos" << std::endl;
	option_main = Utils::Validation::validation_numbers<int>("\nIngrese su opción");
	switch (option_main) {
	case 1:
		system("cls");
		std::cout << "Usted Eligió: Ordenamiento Burbuja" << std::endl;
		std::cout << " _______________________________________________________________________________________________________________________________" << std::endl;
		std::cout << "|             VENTAJAS                  |                                              DESVENTAJAS                              |" << std::endl;
		std::cout << "|_______________________________________|_______________________________________________________________________________________|" << std::endl;
		std::cout << "|Popular y Fácil de implementar         | No se comporta adecuadamente con una lista que contenga un número grande de elementos |" << std::endl;
		std::cout << "|_______________________________________|_______________________________________________________________________________________|" << std::endl;
		std::cout << "|Apropiado para la enseñanza académica  | No es apropiado para aplicaciones y proyectos grandes, profesionales y complejos      |" << std::endl;
		std::cout << "|_______________________________________|_______________________________________________________________________________________|" << std::endl;
		std::cout << "|Eficaz y sencillo                      | Consume bastante tiempo de computadora                                                |" << std::endl;
		std::cout << "|_______________________________________|_______________________________________________________________________________________|" << std::endl;
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
		std::cout << " ______________________________________________________________________________________________________________________________________________________________|" << std::endl;
		std::cout << "|                                  VENTAJAS                                            |                           DESVENTAJAS									|" << std::endl;
		std::cout << "|______________________________________________________________________________________|_______________________________________________________________________|" << std::endl;
		std::cout << "|Es estable, preservando la orden de elementos iguales.                                | No funciona tan bien cuando los números son muy largos, ya que        |" << std::endl;
		std::cout << "|______________________________________________________________________________________|_______________________________________________________________________|" << std::endl;
		std::cout << "|Funciona en un tiempo lineal, en comparación de varios otros métodos de ordenamiento. | el total detiempo es proporcional a la longitud del número más grande |" << std::endl;
		std::cout << "|______________________________________________________________________________________|_______________________________________________________________________|" << std::endl;
		std::cout << "|Es particularmente eficiente cuando se tratan con grandes grupos de números cortos.   | y al número de elementos a ordenar.                                   |" << std::endl;
		std::cout << "|______________________________________________________________________________________|_______________________________________________________________________|" << std::endl;
		break;
	case 5:
		system("cls");
		std::cout << "Usted Eligió: Comparación Ordenamientos Internos" << std::endl;
		std::cout << " __________________________________________________________________________________________________________________________________________________________________________________ " << std::endl;
		std::cout << "|                 BURBUJA                 |                 SHELLSHORT                |                  QUICKSORT                    |                    RADIX                   |" << std::endl;
		std::cout << "|-----------------------------------------|-------------------------------------------|-----------------------------------------------|--------------------------------------------|" << std::endl;
		std::cout << "|Fácil implementación.                    |Muy simple, tiempo de ejecución aceptable. |Es muy rápida en su ejecución, no requiere     |Es estable, preservando la orden de         |" << std::endl;
		std::cout << "|                                         |                                           |memoria adicional.                             |elementos iguales.                          |" << std::endl;
		std::cout << "|_________________________________________|___________________________________________|_______________________________________________|____________________________________________|" << std::endl;
		std::cout << "|No requiere memoria adicional.           |Trabajo muy bien con arreglos pequeños o   |Tiene un lazo interior extremadamente corto.   |Funciona en un tiempo lineal, en            |" << std::endl;
        std::cout << "|                                         |medianos, no necesita de memoria externa.  |                                               |comparación de varios otros métodos de      |" << std::endl;
		std::cout << "|                                         |                                           |                                               |ordenamiento.                               |" << std::endl;
		std::cout << "|_________________________________________|___________________________________________|_______________________________________________|____________________________________________|" << std::endl;
		std::cout << "|Es bastante sencillo, eficaz y en un     |Eficiente para conjuntos de elementos      |Aprovecha la memoria caché del procesador      |El tiempo de ordenar cada elemento es       |" << std::endl;
	    std::cout << "|código reducido se realiza mejor el      |medianos menores a 1000.                   |del hardware, y eso por sí solo puede          |constante, ya que no se hacen comparaciones |" << std::endl;
	    std::cout << "|ordenamiento.                            |                                           |mejorar el rendimiento más de lo que se espera |entre elementos.                            |" << std::endl;
		std::cout << "|_________________________________________|___________________________________________|_______________________________________________|____________________________________________|" << std::endl;
		break;
	default:
		std::cout << "ELIJA UNA OPCIÓN VALIDA!" << std::endl;
		break;
	}
	
	return 0;
}