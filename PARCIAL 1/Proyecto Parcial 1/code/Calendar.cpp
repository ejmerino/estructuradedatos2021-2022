/**
Universidad de las Fuerzas Armadas - ESPE
PROYECTO PRIMER PARCIAL - COMPRA DE AUTOMOVILES
Autores:
Jhoel Chichaiza
Josué Merino
Pablo Yanez
Daniel Vizarra
Fecha de creación: 26/11/2021
Fecha de modificación: 07/12/2021
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