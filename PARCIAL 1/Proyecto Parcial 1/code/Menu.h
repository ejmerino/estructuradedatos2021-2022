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
#include <string>
#include <Windows.h>
#include <vector>
#include "MenuOption.h"
#include <conio.h>
#include <iostream>

constexpr auto KEY_UP = 72;
constexpr auto KEY_DOWN = 80;
constexpr auto KEY_ENTER = 13;
constexpr auto KEY_ESCAPE = 27;


class Menu
{
public:
    /**
     * @brief Construct a new Menu object
     *
     */
    Menu() = default;

    /**
     * @brief Construct a new Menu object
     *
     */
    Menu(std::vector<MenuOption>);

    /**
     * @brief desplazar por coordenada
     *
     */
    void navigation();

    /**
     * @brief mostrar en pantalla
     *
     */
    void display(size_t);

private:
    std::vector<MenuOption> menu_option_;
    HANDLE console_;
};