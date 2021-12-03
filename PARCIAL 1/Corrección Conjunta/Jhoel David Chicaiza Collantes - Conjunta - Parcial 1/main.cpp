/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Tema: Valor Iva - Corrección
   Autores:
   Fecha de creación: 01/11/2021
   Fecha de modificación: 03/11/2021
*/
#define NOMINMAX 1
#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
#include <limits>
#include <conio.h>
#include "menu.h"
#include "menu_option.h"
#include "lista_doble_enlazada.h"
#include "nodo.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    Menu menu("Menu - Precios con IVA");

    int num = 0, num2 = 0;
    float num3,iva,r,dscto,total_con_iva;
    int valor = 0;

    ListaDobleEnlazada lista;

    menu.add_option(MenuOption("Precio con IVA", [&](MenuOptionArguments args) {
        printf("Introduzca el precio de un producto:");
        scanf("%f", &num3);

        iva = (12 * num3 / 100);
        r = num3 - iva;
        total_con_iva = num3 + iva;
        printf("---------------------------------------\n");
        printf("|              CALCULO                |\n");
        printf("---------------------------------------\n");
        printf("| Subtotal: %f                 | \n", num3);
        printf("| Precio del IVA: %f \t      |\n", iva);
        printf("| El precio con IVA es de: %f  | \n", num3 + iva);
        //printf("\nEl precio sin IVA es de: %f\n", r);
        if (total_con_iva >= 1.0f && total_con_iva <= 99.0f)
        {
            dscto = (5 * total_con_iva) / 100;
            printf("| el descuento es del 5               |");
        }
        else if (total_con_iva >= 100.0f && total_con_iva <= 999.0f)
        {
            dscto = (10 * total_con_iva) / 100;
            printf("| el descuento es del 10             |");
        }
        else if (total_con_iva >= 1000.0f && total_con_iva <= 10000.0f)
        {
            dscto = (15 * total_con_iva) / 100;
            printf("| el descuento es del 15              |");
        }
        //monto_pagar = (num3 + iva) - dscto;
        printf("\n| monto final a pagar es: %f   |\n", total_con_iva - dscto);
        printf("---------------------------------------\n");

        system("pause");
        return 0;
        }));

    menu.add_option(MenuOption("Salir", [&](MenuOptionArguments args) {
        std::cout << "Salio con exito del programa..." << std::endl;
        menu.stop();
    }, false));

    menu.display(); 
}

