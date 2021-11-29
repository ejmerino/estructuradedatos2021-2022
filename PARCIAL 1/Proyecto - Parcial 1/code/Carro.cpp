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

Carro::Carro(const Carro& c) 
{
	*this = c;
}
Carro::~Carro() {}

char* Carro::get_marca()
{
	return marca;
}

void Carro::set_marca(char _set_marca[])
{
	marca = new char[strlen(_set_marca) + 1];
	strcpy(marca, _set_marca);
}

char* Carro::get_placa()
{
	return placa;
}

void Carro::set_placa(char _set_placa[])
{
	placa = new char[strlen(_set_placa) + 1];
	strcpy(placa, _set_placa);
}

char* Carro::get_ano()
{
	return ano;
}

void Carro::set_ano(char _set_ano[])
{
	ano = new char[strlen(_set_ano) + 1];
	strcpy(ano, _set_ano);
}

void Carro::to_string(void)
{
	cout << "\nEl carro es de la marca" << get_marca() << "tiene la placa : " << get_placa() << " y es del año: " << get_ano();
}

void Carro::generar_dueno(void)
{

}

void Carro::registro(void)
{

}