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
#pragma once
#include <string>
using namespace std;
class Calendar
{
private:
	string* date;
public:

	/**
	 * @brief Construct a new Calendar object
	 *
	 */
	Calendar(string*);

	/**
	 * @brief Construct a new Calendar object
	 *
	 */
	Calendar() = default;

	/**
	 * @brief Set the date object
	 *
	 */
	void set_date(string*);

	/**
	 * @brief Get the date object
	 *
	 * @return string*
	 */
	string* get_date();


};