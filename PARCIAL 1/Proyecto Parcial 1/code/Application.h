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
	 * @brief tabla amortizacion
	 *
	 * @return int
	 */
	static int run();

};
