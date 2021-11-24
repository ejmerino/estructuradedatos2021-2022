/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Trabajo en Clase 07 - Lista Simple
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 20/11/2021
   Fecha de modificación: 21/11/2021
*/

#pragma warning(disable : 4996)
#include <iostream>
#include "Lista.h"
#include "Lista.cpp"
#include "Validacion.h"

int main() {
	Validacion validation;
	Lista<int> list;
	char ch;
	int item;
	char aux_item[20];
	char aux_message[] = "Ingrese el elemento: ";
	bool quit = false;
	do {
		system("cls");
		std::cout << "Universidad De Las Fuerzas Armadas - ESPE\n" << std::endl;
		std::cout << "1.- Insertar elemento." << std::endl;
		std::cout << "2.- Mostrar lista." << std::endl;
		std::cout << "3.- Borrar elemento." << std::endl;
		std::cout << "4.- Salir." << std::endl;
		std::cout << "\nSeleccion una opcion: ";
		std::cin >> ch;
		switch (ch) {
		case '1':
			strcpy(aux_item, validation.solo_int(aux_message));
			item = atoi(aux_item);
			list.insertar(item);
			system("pause");
			break;
		case '2':
			list.mostrar_lista();
			system("pause");
			break;
		case '3':
			list.borrar();
			system("pause");
			break;
		case '4':
			quit = true;
			system("pause");
			break;
		default:
			fflush(stdin);
			std::cout << "¡Solo números!" << std::endl;
			system("pause");
			break;
		}
	} while (!quit);

	return 0;
}