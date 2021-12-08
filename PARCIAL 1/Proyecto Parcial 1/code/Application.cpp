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
#include "Application.h"

int Application::run()
{
    init();
    return 0;
}

void Application::init()
{
    std::vector<MenuOption> menu_item
    {
        {1, "VENDER AUTOMOVIL", create_account},
        {2, "SALIR", exit_program}
    };
    Menu menu{ menu_item };
    menu.navigation();
}

void Application::create_account()
{
    bool validate_id = true;
    std::string id;

    while (validate_id)
    {
        std::cout << "Ingrese el numero de cedula: ";
        getline(std::cin, id);
        validate_id = (File::search(id) || Utils::Validation::validate_id(id));
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

    std::string date_of_birth;
    while (validate)
    {
        std::cout << "Ingrese la fecha de nacimiento (dd-mm-aaaa): ";
        std::getline(std::cin, date_of_birth);
        validate = Utils::Validation::validate_date_of_birth(date_of_birth);
    }
    validate = true;

    std::string phone;
    std::cout << "Ingrese un numero telefonico: ";
    phone = std::to_string(Utils::Validation::validateDigits(10)).insert(0, "0");
    std::cout << std::endl;


    std::string addres;
    std::cout << "Ingrese la direccion: ";
    std::getline(std::cin, addres);

    std::string placa;

    bool validate_placa = true;

    while (validate_placa)
    {
        std::cout << "Ingrese la placa (AAA1234 | AAA123): ";
        std::getline(std::cin, placa);
        validate_placa = (File::search(placa) || Utils::Validation::validate_placa(placa));
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
    }
       LinkedList<Person> persons = Application::container();
    int age = Utils::Generator::calculate_age(date_of_birth);
    std::string email = Utils::Generator::create_email(persons, name, last_name);
    Person new_person(id, name, last_name, date_of_birth, phone, addres, placa);
    new_person.set_age(age);
    new_person.set_email(email);
    new_person.set_placa(placa);
    persons.add(new_person);
    File::add(persons);
    init();
}

LinkedList<Person>& Application::container()
{
    LinkedList<Person> persons = File::read();
    return persons;
}


void Application::exit_program()
{
    exit(0);
}
