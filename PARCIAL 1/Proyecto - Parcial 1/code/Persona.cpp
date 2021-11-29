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

Persona::Persona(std::string id, std::string name,
	std::string last_name, std::string number)
	: id_(id), name_(name), last_name_(last_name), number_phone_(number)
{

}

void Persona::set_name(std::string name)
{
	this->name_ = name;
}

void Persona::set_last_name(std::string last_name)
{
	this->last_name_ = last_name;
}

void Persona::set_number(std::string phone)
{
	this->number_phone_ = phone;
}

void Persona::set_email(std::string email)
{
	this->email_ = email;
}

void Persona::set_id(std::string id)
{
	this->id_ = id;
}

std::string Persona::get_name()
{
	return name_;
}

std::string Persona::get_last_name()
{
	return last_name_;
}

std::string Persona::get_number()
{
	return number_phone_;
}

std::string Persona::get_email()
{
	return email_;
}

std::string Persona::get_id()
{
	return id_;
}
