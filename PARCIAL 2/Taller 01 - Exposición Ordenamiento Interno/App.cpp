/*****************************************
UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
TALLER 01 - EXPOSICION ORDENAMIENTO INTERNO
Autores: 
- Jhoel Chicaiza
- Josu� Merino
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
	std::cout << "\n�De qu� algor�tmo desea conocer m�s?" << std::endl;
	std::cout << "\n1.-Burbuja" << std::endl;
	std::cout << "\n2.-QuickSort" << std::endl;
	std::cout << "\n3.-ShellSort" << std::endl;
	std::cout << "\n4.-Radix" << std::endl;
	std::cout << "\n5.-Comparaci�n Ordenamientos Internos" << std::endl;
	option_main = Utils::Validation::validation_numbers<int>("\nIngrese su opci�n");
	switch (option_main) {
	case 1:
		system("cls");
		std::cout << "Usted Eligi�: Ordenamiento Burbuja" << std::endl;
		std::cout << " _______________________________________________________________________________________________________________________________" << std::endl;
		std::cout << "|             VENTAJAS                  |                                              DESVENTAJAS                              |" << std::endl;
		std::cout << "|_______________________________________|_______________________________________________________________________________________|" << std::endl;
		std::cout << "|Popular y F�cil de implementar         | No se comporta adecuadamente con una lista que contenga un n�mero grande de elementos |" << std::endl;
		std::cout << "|_______________________________________|_______________________________________________________________________________________|" << std::endl;
		std::cout << "|Apropiado para la ense�anza acad�mica  | No es apropiado para aplicaciones y proyectos grandes, profesionales y complejos      |" << std::endl;
		std::cout << "|_______________________________________|_______________________________________________________________________________________|" << std::endl;
		std::cout << "|Eficaz y sencillo                      | Consume bastante tiempo de computadora                                                |" << std::endl;
		std::cout << "|_______________________________________|_______________________________________________________________________________________|" << std::endl;
		system("pause");
		break;
	case 2:
		system("cls");
		std::cout << "Usted Eligi�: QuickSort" << std::endl;
		break;
	case 3:
		system("cls");
		std::cout << "Usted Eligi�: ShellSort" << std::endl;
		break;
	case 4:
		system("cls");
		std::cout << "Usted Eligi�: Ordenamiento Radix" << std::endl;
		std::cout << " ______________________________________________________________________________________________________________________________________________________________|" << std::endl;
		std::cout << "|                                  VENTAJAS                                            |                           DESVENTAJAS									|" << std::endl;
		std::cout << "|______________________________________________________________________________________|_______________________________________________________________________|" << std::endl;
		std::cout << "|Es estable, preservando la orden de elementos iguales.                                | No funciona tan bien cuando los n�meros son muy largos, ya que        |" << std::endl;
		std::cout << "|______________________________________________________________________________________|_______________________________________________________________________|" << std::endl;
		std::cout << "|Funciona en un tiempo lineal, en comparaci�n de varios otros m�todos de ordenamiento. | el total detiempo es proporcional a la longitud del n�mero m�s grande |" << std::endl;
		std::cout << "|______________________________________________________________________________________|_______________________________________________________________________|" << std::endl;
		std::cout << "|Es particularmente eficiente cuando se tratan con grandes grupos de n�meros cortos.   | y al n�mero de elementos a ordenar.                                   |" << std::endl;
		std::cout << "|______________________________________________________________________________________|_______________________________________________________________________|" << std::endl;
		break;
	case 5:
		system("cls");
		std::cout << "Usted Eligi�: Comparaci�n Ordenamientos Internos" << std::endl;
		std::cout << " __________________________________________________________________________________________________________________________________________________________________________________ " << std::endl;
		std::cout << "|                 BURBUJA                 |                 SHELLSHORT                |                  QUICKSORT                    |                    RADIX                   |" << std::endl;
		std::cout << "|-----------------------------------------|-------------------------------------------|-----------------------------------------------|--------------------------------------------|" << std::endl;
		std::cout << "|F�cil implementaci�n.                    |Muy simple, tiempo de ejecuci�n aceptable. |Es muy r�pida en su ejecuci�n, no requiere     |Es estable, preservando la orden de         |" << std::endl;
		std::cout << "|                                         |                                           |memoria adicional.                             |elementos iguales.                          |" << std::endl;
		std::cout << "|_________________________________________|___________________________________________|_______________________________________________|____________________________________________|" << std::endl;
		std::cout << "|No requiere memoria adicional.           |Trabajo muy bien con arreglos peque�os o   |Tiene un lazo interior extremadamente corto.   |Funciona en un tiempo lineal, en            |" << std::endl;
        std::cout << "|                                         |medianos, no necesita de memoria externa.  |                                               |comparaci�n de varios otros m�todos de      |" << std::endl;
		std::cout << "|                                         |                                           |                                               |ordenamiento.                               |" << std::endl;
		std::cout << "|_________________________________________|___________________________________________|_______________________________________________|____________________________________________|" << std::endl;
		std::cout << "|Es bastante sencillo, eficaz y en un     |Eficiente para conjuntos de elementos      |Aprovecha la memoria cach� del procesador      |El tiempo de ordenar cada elemento es       |" << std::endl;
	    std::cout << "|c�digo reducido se realiza mejor el      |medianos menores a 1000.                   |del hardware, y eso por s� solo puede          |constante, ya que no se hacen comparaciones |" << std::endl;
	    std::cout << "|ordenamiento.                            |                                           |mejorar el rendimiento m�s de lo que se espera |entre elementos.                            |" << std::endl;
		std::cout << "|_________________________________________|___________________________________________|_______________________________________________|____________________________________________|" << std::endl;
		break;
	default:
		std::cout << "ELIJA UNA OPCI�N VALIDA!" << std::endl;
		break;
	}
	
	return 0;
}