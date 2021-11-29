#pragma once
#include "Persona.h"
#include "LinkedList.h"

class Generator
{
public:

     /**
     * @brief Create a email object
     *
     * @return std::string
     */
    static std::string create_email(LinkedList<Persona>, std::string, std::string);

    /**
     * @brief pasa a minusculas
     *
     * @return std::string
     */
    static std::string lower_case(std::string);

    /**
     * @brief double a string
     *
     * @return std::string
     */
    static std::string to_string(double);
};