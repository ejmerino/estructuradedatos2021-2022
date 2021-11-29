/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Proyecto - Parcial 1
   Autores:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear
   Fecha de creación: 17/11/2021
   Fecha de modificación: 17/11/2021
*/

#pragma once
#include <iostream> 

class Persona
{

public:

    /**
     * @brief Construct a new Persona object
     *
     */
    Persona() = default;

    /**
     * @brief Construct a new Persona object
     *
     */
    Persona(std::string, std::string, std::string, std::string, std::string, std::string);

    /**
     * @brief Set the name object
     *
     */
    void set_name(std::string);

    /**
     * @brief Set the last name object
     *
     */
    void set_last_name(std::string);

    /**
     * @brief Set the number object
     *
     */
    void set_number(std::string);

    /**
     * @brief Set the email object
     *
     */
    void set_email(std::string);

    /**
     * @brief Set the id object
     *
     */
    void set_id(std::string);

    /**
     * @brief Get the name object
     *
     * @return std::string
     */
    std::string get_name();

    /**
     * @brief Get the last name object
     *
     * @return std::string
     */
    std::string get_last_name();

    /**
     * @brief Get the number object
     *
     * @return std::string
     */
    std::string get_number();

    /**
     * @brief Get the email object
     *
     * @return std::string
     */
    std::string get_email();

    /**
     * @brief Get the id object
     *
     * @return std::string
     */
    std::string get_id();

private:
    std::string id_;
    std::string name_;
    std::string last_name_;
    std::string date_of_birth_;
    std::string email_;
    std::string addres_;
    std::string number_phone_;
    int age_ = 0;
};