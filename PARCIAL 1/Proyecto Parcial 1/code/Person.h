/**
Universidad de las Fuerzas Armadas - ESPE
PROYECTO PRIMER PARCIAL - COMPRA DE AUTOMOVILES
Autores:
Jhoel Chichaiza
Josué Merino
Pablo Yanez
Daniel Vizarra
Fecha de creación: 26/11/2021
Fecha de modificación: 07/12/2021
**/
#pragma once
#include <iostream> 

class Person
{

public:

    /**
     * @brief Construct a new Person object
     *
     */
    Person() = default;

    /**
     * @brief Construct a new Person object
     *
     */
    Person(std::string, std::string, std::string, std::string, std::string, std::string, std::string);

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
     * @brief Set the addres object
     *
     */
    void set_addres(std::string);

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
     * @brief Set the age object
     *
     */
    void set_age(int);

    /**
     * @brief Set the date of birth object
     *
     */
    void set_date_of_birth(std::string);

    /**
     * @brief Set the placa object
     *
     */
    void set_placa(std::string);

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
     * @brief Get the addres object
     *
     * @return std::string
     */
    std::string get_addres();

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

    /**
     * @brief Get the date of birth object
     *
     * @return std::string
     */
    std::string get_date_of_birth();

    /**
     * @brief Get the date of placa object
     *
     * @return std::string
     */
    std::string get_placa();

    /**
     * @brief Get the age object
     *
     * @return int
     */
    int get_age();

private:
    std::string id_;
    std::string name_;
    std::string last_name_;
    std::string date_of_birth_;
    std::string email_;
    std::string addres_;
    std::string number_phone_;
    std::string placa_;
    int age_ = 0;
};