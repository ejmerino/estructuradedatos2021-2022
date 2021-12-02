#pragma once
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include "Node.h"
#include "Person.h"
#include "LinkedList.h"
#include "json.hpp"

using json = nlohmann::json;
class File
{
public:

	/**
	 * @brief borrar cuenta
	 *
	 */
	static void delete_account();

	/**
	 * @brief agregar persona
	 *
	 */
	static void add(LinkedList<Person>&);

	/**
	 * @brief actualizar lista
	 *
	 */
	static void update();

	/**
	 * @brief buscar en lsita
	 *
	 * @return true
	 * @return false
	 */
	static bool search(std::string&);

	/**
	 * @brief buscar creditos
	 *
	 * @return true
	 * @return false
	 */
	static bool search_credits(std::string&);

	/**
	 * @brief Construct a new Linked List< Person>read object
	 *
	 */
	static LinkedList<Person>read();

	
	/**
	 * @brief buscar deuda por persona
	 *
	 * @return Person
	 */
	static Person at_person(std::string);

	/**
	 * @brief convertir a json
	 *
	 */
	static void to_json_objet(json&, Person);

	/**
	 * @brief objeto a json
	 *
	 */
	static void to_object_json(json&, Person&, std::string);
	
};
