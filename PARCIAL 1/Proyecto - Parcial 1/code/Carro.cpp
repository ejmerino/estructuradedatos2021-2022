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

using namespace std;

Carro::Carro() {}
Carro::~Carro() {}

string Carro::getMarca(void)
{
	return marca;
}

void Carro::setMarca(string newMarca)
{
	marca = newMarca;
}

string Carro::getPlaca(void)
{
	return placa;
}

void Carro::setPlaca(string newPlaca)
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
	cout << "\nEl carro es de la marca" << getMarca() << "tiene la placa : " << getPlaca() << " y es del año: " << getAno();
}

void Carro::generar_dueno(void)
{

}

void Carro::registro(void)
{

}