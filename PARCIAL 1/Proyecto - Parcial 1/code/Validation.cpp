#pragma warning(disable : 4996) ;
#include "Validation.h"

using namespace Utils;

bool Validation::validate_id(std::string& _id)
{

    if (_id.length() != 10)
    {
        return true;
    }

    int temp;
    int sum_par = 0;
    int sum_impar = 0;
    int sum;

    int i = 1;
    std::string digits = _id.substr(0, _id.size() - 1);
    for (char& c : digits)
    {
        int digit = c - '0';
        if (i % 2 == 0) {
            sum_par += digit;
        }
        else {
            if ((digit * 2) > 9)
            {
                sum_impar += (digit * 2) - 9;
            }
            else
            {
                sum_impar += (digit * 2);
            }
        }
        i++;
    }

    sum = sum_par + sum_impar;
    int verifier = _id.at(_id.size() - 1) - '0';
    int higher = (10 - (sum % 10)) + sum;

    if (sum % 10 == 0)
    {
        return verifier != 0;
    }
    if ((higher - sum) == verifier) {
        return false;
    }
    else {
        std::cout << "\nLa cedula ingresada es invalida" << std::endl;
        return true;
    }
}

bool Utils::Validation::is_digit(const std::string& str)
{
    for (const char& c : str)
    {
        if (std::isdigit(c))
        {
            return true;
        }
    }
    return false;
}

bool Validation::validate_string(const std::string& str)
{
    for (size_t i = 0; i < str.size(); i++)
    {
        char c = str[i];
        if (!isalpha(c) && !isspace(c))
        {
            std::cout << "Error!, Solo debe tener letras." << std::endl;
            return true;
        }
    }
    return false;
}

bool Validation::validate_input_number(int& number)
{
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
        std::cout << "Ingrese solo numeros!" << std::endl;
        return true;
    }
    return false;
}

bool Validation::validate_input_number(double& number)
{
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
        std::cout << "Ingrese solo numeros!" << std::endl;
        return true;
    }
    return false;
}

bool Validation::validate_input_number(float& number)
{
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
        std::cout << "Ingrese solo numeros!" << std::endl;
        return true;
    }
    return false;
}

bool Validation::validate_three_digits(long number)
{
    int size = int(std::log10(number) + 1);
    if (size == 10)
    {
        return false;
    }
    return true;
}

long Validation::validateDigits(int digits)
{
    std::string cad;
    int i = 0;
    char c = 0;
    while (i != digits) {
        (c = _getch());
        if (c >= '0' && c <= '9') {
            std::cout << c;
            cad += c;
            i++;
        }
    }
    long datos = std::stoll(cad);
    return datos;
}

inline float Validation::validate_float()
{
    std::string cad;
    //Si se necesita decimales -> decimal = false
    bool decimal = false;
    char c = 0;
    while (c != 13) {
        c = _getch();
        if ((c >= '0' && c <= '9') || c == '.') {
            if (c == '.' && decimal == false) {
                cad += c;
                decimal = true;
                //cout << "entro" << endl;
                std::cout << c;
            }
            else {
                if (c != '.') {
                    cad += c;
                    std::cout << c;
                }
            }
        }
    }
    std::cout << "" << std::endl;
    const char* ca = cad.c_str();
    float f = std::strtof(ca, 0);
    return f;
}

template <typename T>
T Validation::validation_numbers(std::string str)
{
    char error = 'a';
    T number;
    int again = 1;
    while (again == 1)
    {
        try
        {
            std::cout << str << " : ";
            std::cin >> number;
            if (!std::cin)
            {
                throw error = -1;
            }
            again = 0;
        }
        catch (...)
        {
            std::cout << "Dato incorrecto intente de nuevo" << std::endl;
            again = 1;
        }
    }
    return number;
}
