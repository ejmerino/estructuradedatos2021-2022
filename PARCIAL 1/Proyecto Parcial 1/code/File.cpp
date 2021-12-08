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
#include "File.h"
#include <iomanip>
void File::delete_account()
{
}

void File::add(LinkedList<Person>& list)
{
	std::ofstream keys("placas.txt");
	int j = 0;
	while (j < list.get_size())
	{
		keys << list.at(j)->get_data().get_placa() << "," << "\n";
		++j;
	}
	keys.close();

	json file_json;
	for (int i = 0; i < list.get_size(); ++i)
	{
		to_json_objet(file_json, list.at(i)->get_data());
	}
	std::ofstream file("persons.json");
	file << std::setw(4) << file_json << std::endl;
}

void File::update()
{
}

bool File::search(std::string& id)
{
	std::ifstream file("persons.json");
	json file_json;
	try
	{
		file >> file_json;
		if (id == file_json[id]["id"].get<std::string>())
		{
			std::cout << "\nUsuario Existente." << std::endl;
			std::cin.clear();
			return true;
		}
	}
	catch (json::exception& e)
	{
		return false;
	}

	return false;
}

bool File::search_placa(std::string& placa)
{
	std::ifstream file("persons.json");
	json file_json;
	try
	{
		file >> file_json;
		if (placa == file_json[placa]["placa"].get<std::string>())
		{
			std::cout << "\nPlaca Existente, el automovil ya fue vendido." << std::endl;
			std::cin.clear();
			return true;
		}
	}
	catch (json::exception& e)
	{
		return false;
	}

	return false;
}

LinkedList<Person> File::read()
{
	std::vector<std::string> keys_vector;
	LinkedList<Person> list;
	std::ifstream keys("placas.txt");
	std::string str;
	std::string str2;
	int count_key{ 0 };
	while (getline(keys, str))
	{
		std::istringstream ss(str);
		while (getline(ss, str2, ','))
		{
			keys_vector.push_back(str2);
		}
		++count_key;
	}

	try
	{
		std::ifstream file("persons.json");
		json file_json;
		file >> file_json;
		Person person;
		for (int i = 0; i < count_key; ++i)
		{
			std::string key = keys_vector[i];
			to_object_json(file_json, person, key);
			list.add(person);
		}
	}
	catch (json::exception e)
	{
		return list;
	}
	return list;
}

void File::to_json_objet(json& j, Person value)
{
	std::string key = value.get_placa();
	j[key]["id"] = value.get_id();
	j[key]["nombre"] = value.get_name();
	j[key]["apellido"] = value.get_last_name();
	j[key]["fecha_de_nacimiento"] = value.get_date_of_birth();
	j[key]["edad"] = value.get_age();
	j[key]["correo"] = value.get_email();
	j[key]["celular"] = value.get_number();
	j[key]["direccion"] = value.get_addres();
	j[key]["placa"] = value.get_placa();
}

void File::to_object_json(json& j, Person& value, std::string key)
{
	value.set_id(j[key]["id"].get<std::string>());
	value.set_name(j[key]["nombre"].get<std::string>());
	value.set_last_name(j[key]["apellido"].get<std::string>());
	value.set_date_of_birth(j[key]["fecha_de_nacimiento"].get<std::string>());
	value.set_email(j[key]["correo"].get<std::string>());
	value.set_number(j[key]["celular"].get<std::string>());
	value.set_addres(j[key]["direccion"].get<std::string>());
	value.set_age(j[key]["edad"].get<int>());
	value.set_placa(j[key]["placa"].get<std::string>());
}


