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
#include "Calendar.h"

Calendar::Calendar(string* dates)
{
    this->date = dates;
}

void Calendar::set_date(string* dates)
{
    this->date = dates;
}

string* Calendar::get_date()
{
    return date;
}