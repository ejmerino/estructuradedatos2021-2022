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

#pragma once
#pragma warning(disable : 4996)
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Persona{
public:
private:
	char* id;
	char* first_name;
	char* surname;
	char* last_name;	
	char* email;
	float value = 0.0f;
	
public:
	Persona() = default;
	Persona(const Persona&);
	void set_id(char[]);
	char* get_id();
	void set_first_name(char[]);
	char* get_first_name();
	void set_surname(char[]);
	char* get_surname();
	void set_last_name(char[]);
	char* get_last_name();
	void set_email(char[]);
	char* get_email();
	void set_value(float);
	float get_value();
	friend std::ostream& operator << (std::ostream & os, Persona & p);
	friend std::istream& operator >> (std::istream & is, Persona & p);
	bool operator== (Persona & p);
	~Persona();
};
