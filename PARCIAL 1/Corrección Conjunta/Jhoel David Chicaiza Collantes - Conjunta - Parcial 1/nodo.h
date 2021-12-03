/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Tema: Valor Iva - Corrección
   Autores:
   Fecha de creación: 01/11/2021
   Fecha de modificación: 03/11/2021
*/
#pragma once

class Nodo {
public:
    Nodo(int valor);

    Nodo *get_siguiente();
    void set_siguiente(Nodo *nodo);
    
    Nodo *get_anterior();
    void set_anterior(Nodo *nodo);

    int get_valor();
    void set_valor(int _valor);

private:
    int valor;
    Nodo *siguiente = nullptr;
    Nodo *anterior = nullptr;
};
