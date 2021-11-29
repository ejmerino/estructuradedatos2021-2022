#include "Creator.h"
#include "Generator.h"
#include "Generador.cpp"

void Creator::create_account() {
    bool validate_id = true;
    std::string id;

    while (validate_id)
    {
        std::cout << "Ingrese el numero de cedula: ";
        getline(std::cin, id);
        validate_id = (Validation::validate_id(id));
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
    }

    std::cout << std::endl;
    bool validate = true;
    std::string name;
    while (validate)
    {
        std::cout << "Ingrese el nombre: ";
        std::getline(std::cin, name);
        validate = Utils::Validation::validate_string(name);
    }

    validate = true;
    std::string last_name;
    while (validate)
    {
        std::cout << "Ingrese el apellido: ";
        std::getline(std::cin, last_name);
        validate = Utils::Validation::validate_string(last_name);
    }
    validate = true;    

    std::string phone;
    std::cout << "Ingrese un numero telefonico: ";
    phone = std::to_string(Utils::Validation::validateDigits(10)).insert(0, "0");
    std::cout << std::endl;


    LinkedList<Persona> persons = Creator::container();
    std::string email = Generator::create_email(persons, name, last_name);

    Persona new_person(id, name, last_name,phone);
    new_person.set_email(email);
    persons.add(new_person);
    File::add(persons);
}

LinkedList<Persona>& Creator::container()
{
    LinkedList<Persona> persons = File::read();
    return persons;
}