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

#include "Carro.h"
#include <iostream>
#include <stdlib.h>

Carro::Carro() {}
Carro::~Carro() {}

std::string Carro::getMarca(void)
{
	return marca;
}

void Carro::setMarca(std::string newMarca)
{
	marca = newMarca;
}

std::string Carro::getPlaca(void)
{
	return placa;
}

void Carro::setPlaca(std::string newPlaca)
{
	placa = newPlaca;
}

int Carro::getAno(void)
{
	return ano;
}

void Carro::setAno(int newAno)
{
	ano = newAno;
}

void Carro::to_string(void)
{

}

void Carro::generar_dueno(void)
{

}

void Carro::registro(void)
{

}