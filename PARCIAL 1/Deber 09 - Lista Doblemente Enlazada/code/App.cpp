/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Deber 09 - Lista Doblemente Enlazada
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Y�nez Alvear
   Fecha de creaci�n: 20/11/2021
   Fecha de modificaci�n: 21/11/2021
*/

#pragma warning(disable : 4996)
#include <iostream>
#include "ListaDoble.h"
#include "ListaDoble.cpp"
#include "Validacion.h"

int main() {
	Validacion validation;
	ListaDoble<int> list;
	char ch;
	int item;
	char aux_item[20];
	char aux_message[] = "Ingrese el elemento: ";
	bool quit = false;
	do {
		system("cls");
		std::cout << "Universidad De Las Fuerzas Armadas - ESPE\n" << std::endl;
		std::cout << "1.- Insertar por la cola." << std::endl;
		std::cout << "2.- Insertar por la cabeza." << std::endl;
		std::cout << "3.- Mostrar lista." << std::endl;
		std::cout << "4.- Borrar por la cola." << std::endl;
		std::cout << "5.- Borrar por la cabeza." << std::endl;
		std::cout << "6.- Salir." << std::endl;
		std::cout << "\nSeleccion una opcion: ";
		std::cin >> ch;
		switch (ch) {
		case '1':
			strcpy(aux_item, validation.solo_int(aux_message));
			item = atoi(aux_item);
			list.insertar_cola(item);
			system("pause");
			break;
		case '2':
			strcpy(aux_item, validation.solo_int(aux_message));
			item = atoi(aux_item);
			list.insertar_cabeza(item);
			system("pause");
			break;
		case '3':
			list.mostrar_lista();
			system("pause");
			break;
		case '4':
			list.borrar_cola();
			system("pause");
			break;
		case '5':
			list.borrar_cabeza();
			system("pause");
			break;
		case '6':
			quit = true;
			system("pause");
			break;
		default:
			fflush(stdin);
			std::cout << "�Solo n�meros!" << std::endl;
			system("pause");
			break;
		}
	} while (!quit);

	return 0;
}