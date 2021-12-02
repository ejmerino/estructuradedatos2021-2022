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