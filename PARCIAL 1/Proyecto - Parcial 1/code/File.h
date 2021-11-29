#pragma once
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include "Node.h"
#include "Persona.h"
#include "LinkedList.h"
#include "json.hpp"

using json = nlohmann::json;
class File
{
public:

	
	/**
	 * @brief agregar persona
	 *
	 */
	static void add(LinkedList<Persona>&);

	/**
	 * @brief buscar en lsita
	 *
	 * @return true
	 * @return false
	 */
	static bool search(std::string&);

	
	/**
	 * @brief Construct a new Linked List< Person>read object
	 *
	 */
	static LinkedList<Persona>read();

	/**
	 * @brief convertir a json
	 *
	 */
	static void to_json_objet(json&, Persona);

	/**
	 * @brief objeto a json
	 *
	 */
	static void to_object_json(json&, Persona&, std::string);

};
