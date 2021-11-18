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

#pragma disable(warning:26495)
#include "Persona.h"

Persona::Persona(){}
Persona::~Persona(){}

int Persona::getId(void)
{
	return Id;
}

void Persona::setId(int newId)
{
	Id = newId;
}

int Persona::getEdad(void)
{
	return edad;
}

void Persona::setEdad(int newEdad)
{
	edad = newEdad;
}


std::string Persona::getCorreo(void)
{
	return correo;
}

void Persona::setCorreo(std::string newCorreo)
{
	correo = newCorreo;
}
void Persona::to_string(void)
{

}
void Persona::generar_correo(void)
{

}