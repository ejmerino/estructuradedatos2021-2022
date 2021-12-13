/*
//////////////////////////////////////////////////
    Universidad de las Fuerzas Armadas - ESPE	 ||
    Deber 02 - Parcial 2 - Expresiones Lambda    ||
    Autores:									 ||
    -Jhoel Chicaiza								 ||
    -Josué Merino								 ||
    -Pablo Yanez							     ||
    -Daniel Vizcarra							 ||
    -Fecha de Creación: 11 / 12 / 2021			 ||
    -Fecha de Modificación: 13 / 12 / 2021		 ||
//////////////////////////////////////////////////
*/

#pragma once
#include <chrono>
#include <random>
#include <iostream>
#include <exception>
#include <limits>
#include <ios>
namespace Utils
{
    class Validation
    {
    public:
        /**
        * @brief Validacion la  entrada por teclado de un tipo int
        *
        * @return true
        * @return false
        */
        static bool validate_input_number(int&);
        template <typename T>
        static T validation_numbers(std::string);
    };

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
                std::cin.clear(); // Clear error flags
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Error!! Solo ingresar numeros" << std::endl;
                again = 1;
            }
        }
        return number;
    }

}
