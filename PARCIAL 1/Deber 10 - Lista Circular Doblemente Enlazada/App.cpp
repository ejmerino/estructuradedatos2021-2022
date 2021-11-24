#pragma warning(disable : 4996)
#include <iostream>
#include "ListaCircular.h"
#include "ListaCircular.cpp"
#include "Validacion.h"

int main() {
	Validacion validation;
	ListaCircular <int> list;
	char ch;
	int item;
	char aux_item[20];
	char aux_message[] = "Ingrese el elemento: ";
	char aux_message2[] = "Ingrese el elemento y la posicion: ";
	bool quit = false;
	do {
		system("cls");
		std::cout << "Universidad De Las Fuerzas Armadas - ESPE\n" << std::endl;
		std::cout << "1.- Insertar por la cola." << std::endl;
		std::cout << "2.- Insertar por la cabeza." << std::endl;
		std::cout << "3.- Mostrar lista." << std::endl;
		std::cout << "4.- Borrar elemento." << std::endl;
		std::cout << "5.- Salir." << std::endl;
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
			list.borrar_cabeza();
			system("pause");
			break;
		case '5':
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