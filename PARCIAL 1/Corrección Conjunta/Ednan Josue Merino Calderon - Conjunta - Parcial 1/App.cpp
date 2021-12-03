#include <iostream>
#include <cstring>
#include "ListaDobleCircular.h"
#include "Operaciones.h"
//#include "Validacion.h"

using namespace std;

void menu();

int main(int argc, char** argv) {
    int opc;
    float newDato,iva=12.0f,total,descuento=0.0f,total_final=0.0f;
    ListaDobleCircular list;
    Operaciones op;
    //Validacion val;
    //char aux_value[40];
    //char message[] = "Ingrese el subtotal a insertar: ";
    do {
        //system("cls");
        menu();
        cin >> opc;
        switch (opc) {
        case 1:
            cout << "\nIngresar el subtotal a insertar: $";
            cin >> newDato;
            //op.generar_iva(newDato);
            total = newDato + ((newDato * iva) / 100);
            cout << "\nSu total es de $" << total;
            if (total >= 1.0f or total <= 100.0f) {
                descuento = (total * 5) / 100;
            }
            else if (total > 100.0f or total <= 1000) {
                descuento = (total * 10) / 100;
            }
            else if (total > 1000.0f) {
                descuento = (total * 15) / 100;
            }
            cout << "\nSu descuento es de $" << descuento;
            //op.generar_descuento(newDato,descuento);
            //op.generar_total_final(newDato, descuento);      
            total_final = total - descuento;
            cout << "\nSu Total final es de $" << total_final << endl<<"\n";
            list.insertar(total_final);
            //menu();
            break;
        case 2:
            list.mostrar();
            break;
        case 3:
            return 0;
            break;
        }
    } while (opc != 3);
}

void menu() {
    cout << "\n\nSISTEMA DE FACTURACION - ESPE";
    cout << "\n1.- Ingresar un Subtotal" << endl;
    cout << "\n2.- Mostrar Facturas" << endl;
    cout << "\n3.- Salir" << endl;
    cout << "\n INGRESE OPCION: ";
}
