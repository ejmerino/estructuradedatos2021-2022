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

#include "Persona.h"

Persona::Persona(const Persona& p) {
	*this = p;
}

Persona::~Persona() {}

void Persona::set_id(char _set_id[]) {
	id = new char[strlen(_set_id) + 1];
	strcpy(id, _set_id);
}

char* Persona::get_id() {
	return id;
}

void Persona::set_first_name(char _first_name[]) {
	first_name = new char[strlen(_first_name) + 1];
	strcpy(first_name, _first_name);
}

char* Persona::get_first_name() {
	return first_name;
}

void Persona::set_surname(char _surname[]) {
	surname = new char[strlen(_surname) + 1];
	strcpy(surname, _surname);
}

char* Persona::get_surname() {
	return surname;
}

void Persona::set_last_name(char _last_name[]) {
	last_name = new char[strlen(_last_name) + 1];
	strcpy(last_name, _last_name);
}

char* Persona::get_last_name() {
	return last_name;
}

void Persona::set_email(char _email[]) {
	email = new char[strlen(_email) + 1];
	strcpy(email, _email);
}

char* Persona::get_email() {
	return email;
}

std::ostream& operator <<(std::ostream& os, Persona& p) {
	os << p.get_id() << std::endl;
	os << p.get_first_name() << std::endl;
	os << p.get_surname() << std::endl;
	os << p.get_last_name() << std::endl;	
	return os;
}

std::istream& operator >>(std::istream& is, Persona& p) {
	char aux_id[11], aux_first_name[40], aux_surname[40], aux_last_name[40], aux_email[40];

	is >> aux_id;
	p.set_id(aux_id);

	is >> aux_first_name;
	p.set_first_name(aux_first_name);

	is >> aux_surname;
	p.set_surname(aux_surname);

	is >> aux_last_name;
	p.set_last_name(aux_last_name);

	is >> aux_email;
	p.set_email(aux_email);

	is.ignore();
	return is;
}

bool Persona::operator==(Persona& p) {
	if (strcmp(this->id, p.id) == 0) {
		return true;
	}
	if (strcmp(this->first_name, p.first_name) == 0 &&
		strcmp(this->surname, p.surname) == 0 &&
		strcmp(this->last_name, p.last_name) == 0) {
		return true;
	}
	return false;
}

