#include "File.h"
#include <iomanip>

void File::add(LinkedList<Persona>& list)
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

LinkedList<Persona> File::read()
{
	std::vector<std::string> keys_vector;
	LinkedList<Persona> list;
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
		Persona person;
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

void File::to_json_objet(json& j, Persona value)
{
	std::string key = value.get_id();
	j[key]["id"] = value.get_id();
	j[key]["name"] = value.get_name();
	j[key]["last_name"] = value.get_last_name();
	j[key]["email"] = value.get_email();
	j[key]["phone"] = value.get_number();
}


void File::to_object_json(json& j, Persona& value, std::string key)
{
	value.set_id(j[key]["id"].get<std::string>());
	value.set_name(j[key]["name"].get<std::string>());
	value.set_last_name(j[key]["last_name"].get<std::string>());
	value.set_email(j[key]["email"].get<std::string>());
	value.set_number(j[key]["phone"].get<std::string>());	
}