/**
Universidad de las Fuerzas Armadas - ESPE
PROYECTO PRIMER PARCIAL - COMPRA DE AUTOMOVILES
Autores:
Jhoel Chichaiza
Josu� Merino
Pablo Yanez
Daniel Vizarra
Fecha de creaci�n: 26/11/2021
Fecha de modificaci�n: 07/12/2021
**/
#include "MenuOption.h"

MenuOption::MenuOption(unsigned int number, const std::string title, Menu_Processing_Function_Ptr fuction)
	: number_option_(number), title_(title), p_processing_function_(fuction)
{

}