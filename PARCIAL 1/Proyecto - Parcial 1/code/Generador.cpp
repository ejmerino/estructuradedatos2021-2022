#pragma warning(disable : 4996) ;
#include "Generator.h"
#include "Validation.h"
#include "Validation.cpp"

std::string Generator::create_email(LinkedList<Persona> people, std::string name1, std::string last)
{

    std::string name, last_name;
    name = lower_case(name1);

    last_name = Generator::lower_case(last);

    std::string email;
    email += name.substr(0, 1);

    email += name.substr(name.find(" ", 0) + 1, 1);

    if (last_name.find(" ", 0) < last_name.length()) {
        email += last_name.substr(0, last_name.find(" ", 0));
    }
    else {
        email += last_name;
    }

    std::string domain = "@espe.edu.ec";
    std::string email_temp, useremail;
    Node<Persona>* person1 = people.get_front();
    size_t positiondomain = 0;
    int last_digit = 0;
    while (person1) {
        email_temp = person1->get_data().get_email();
        positiondomain = email_temp.find("@", 0);
        useremail = email_temp.substr(0, positiondomain);

        if (useremail.length() == email.length()) {

            if (useremail.find(email, 0) == 0) {
                std::string digit = useremail.substr(useremail.length() - 1, 1);
                if (Validation::is_digit(useremail.substr(useremail.length() - 1, 1))) {
                    last_digit = std::stoi(email.substr(email.length() - 1, 1));
                    last_digit = last_digit + 1;
                    email = email.substr(0, email.length() - 1) + std::to_string(last_digit);
                }
                else {
                    email += "1";
                }
            }
        }
        person1 = person1->get_next();
    }
    return email += domain;
}

std::string Generator::lower_case(std::string cad)
{
    for (int i = 0; i < cad.length(); i++) cad[i] = tolower(cad[i]);
    return cad;
}

std::string Generator::to_string(double number)
{
    std::stringstream stream;
    stream << std::fixed << std::setprecision(3) << number;
    std::string s = stream.str();
    return s;
}