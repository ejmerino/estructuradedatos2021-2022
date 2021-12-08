/**
Universidad de las Fuerzas Armadas - ESPE
PROYECTO PRIMER PARCIAL - COMPRA DE AUTOMOVILES
Autores:
Jhoel Chichaiza
Josué Merino
Pablo Yanez
Daniel Vizcarra
Fecha de creación: 26/11/2021
Fecha de modificación: 07/12/2021
**/
#pragma once
#include <vector>
#include <iostream>
#include "MenuOption.h"
#include "Menu.h"
#include "Utils.h"
#include "File.h"
#include <iomanip>
#include <sstream>
class Application
{
private:
	/**
	 * @brief pantalla de inicio
	 *
	 */
	static void init();

	/**
	 * @brief Create a account object
	 *
	 */
	static void create_account();

	/**
	 * @brief almacena personas
	 *
	 * @return LinkedList<Person>&
	 */
	static LinkedList<Person>& container();

	static void exit_program();
public:

	/**
	 * @brief corre el programa
	 *
	 * @return int
	 */
	static int run();

};
