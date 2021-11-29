#pragma once
#include <string>
#include <chrono>
#include <random>
#include <iostream>
#include <exception>
#include <limits>
#include <ios>
#include <vector>
#include <regex>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <conio.h>
#include <stdio.h>
#include "Persona.h"
#include "LinkedList.h"
namespace Utils
{
    class Validation
    {
    public:
        /**
         * @brief Valida que una cadena de caracteres solo sea letras
         *
         * @return true
         * @return false
         */
        static bool validate_string(const std::string&);

        /**
         * @brief Validacion la  entrada por teclado de un tipo int
         *
         * @return true
         * @return false
         */
        static bool validate_input_number(int&);

        /**
         * @brief Valida la entrada por teclado de un tipo double
         *
         * @return true
         * @return false
         */
        static bool validate_input_number(double&);

        /**
         * @brief Valida la entrada por teclado de un tipo float
         *
         * @return true
         * @return false
         */
        static bool validate_input_number(float&);

        /**
         * @brief valida un numero que sea de 3 digitos
         *
         * @param number
         * @return true
         * @return false
         */
        static bool validate_three_digits(long number);

        /**
         * @brief Valida un numero de cualquier tipo
         *
         * @tparam T
         * @return T
         */
        template <typename T>
        static T validation_numbers(std::string);

        static long validateDigits(int digits);
        /**
         * @brief Valida que se ingresen solo numeros decimales por el teclado (con getch())
         *
         * @return float
         */
        static float validate_float();



        /**
         * @brief valida cedula
         *
         * @return true
         * @return false
         */
        static bool validate_id(std::string&);

        /**
         * @brief verifica digito
         *
         * @return true
         * @return false
         */
        static bool is_digit(const std::string&);
    };
}