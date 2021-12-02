#include "File.h"
#include <iomanip>

void File::delete_account()
{
}

void File::add(LinkedList<Person>& list)
{
	std::ofstream keys("keys.txt");
	int j = 0;
	while (j < list.get_size())
	{
		keys << list.at(j)->get_data().get_id() << "," << "\n";
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

bool File::search_credits(std::string& id)
{
	std::ifstream file("credits.json");
	json file_json;
	try
	{
		file >> file_json;
		if (id == file_json[id]["id"].get<std::string>())
		{
			std::cout << "\nEl usuario ya tiene un credito registrado." << std::endl;
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

Person File::at_person(std::string key)
{
	std::ifstream file("persons.json");
	json file_json;
	Person person;
	file >> file_json;
	if (key == file_json[key]["id"].get<std::string>())
	{
		to_object_json(file_json, person, key);
	}
	return person;
}

LinkedList<Person> File::read()
{
	std::vector<std::string> keys_vector;
	LinkedList<Person> list;
	std::ifstream keys("keys.txt");
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
	std::string key = value.get_id();
	j[key]["Cedula"] = value.get_id();
	j[key]["Nombres"] = value.get_name();
	j[key]["Apellidos"] = value.get_last_name();
	j[key]["Fecha de Nacimiento"] = value.get_date_of_birth();
	j[key]["Edad"] = value.get_age();
	j[key]["Email"] = value.get_email();
	j[key]["Telefono"] = value.get_number();
	j[key]["Direccion"] = value.get_addres();
}

void File::to_object_json(json& j, Person& value, std::string key)
{
	value.set_id(j[key]["Cedula"].get<std::string>());
	value.set_name(j[key]["Nombres"].get<std::string>());
	value.set_last_name(j[key]["Apellidos"].get<std::string>());
	value.set_date_of_birth(j[key]["Fecha de Nacimiento"].get<std::string>());
	value.set_email(j[key]["Email"].get<std::string>());
	value.set_number(j[key]["Telefono"].get<std::string>());
	value.set_addres(j[key]["Direccion"].get<std::string>());
	value.set_age(j[key]["Edad"].get<int>());
}

