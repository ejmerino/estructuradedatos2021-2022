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