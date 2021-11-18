/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Proyecto - Parcial 1
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 17/11/2021
   Fecha de modificación: 17/11/2021
*/

#pragma warning(disable : 4996)
#include "Persona.h"
#include "Carro.h"
#include "Carro.cpp"
#include "Persona.cpp"
#include <iostream>
#include "Persona.h"
#include "Validacion.h"
#include <cstdlib>


int main() {

	Persona* persona = new Persona();
	Validacion validacion;
	char ced[11];
	int id;
	char first_name[50];
	char surname[50];
	char last_name[50];
	char aux_value[40];
	char aux_email[40];	
	char message[] = "Ingrese la cedula de la persona: ";
	char message_2[] = "Ingrese el primer nombre de la persona: ";
	char message_3[] = "Ingrese el segundo nombre de la persona: ";
	char message_4[] = "Ingrese el primer apellido de la persona: ";

	strcpy(first_name, validacion.only_letters(message_2));
	persona->set_first_name(first_name);
	std::cout << std::endl;

	strcpy(surname, validacion.only_letters(message_3));
	persona->set_surname(surname);
	std::cout << std::endl;

	strcpy(last_name, validacion.only_letters(message_4));
	persona->set_last_name(last_name);
	std::cout << std::endl;

	
	system("Pause");
	return 0;
}

