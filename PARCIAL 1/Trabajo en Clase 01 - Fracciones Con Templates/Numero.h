/* Universidad de las Fuerzas Armadas - ESPE
Software
Clase 29/10/2021 - Templates
Autores:
-Ednan Josue Merino Calderon
Fecha de creaci�n : 29/10/2021
Fecha de modificaci�n : 29/10/2021
*/

#pragma once
#include <iostream>
#include <stdlib.h>
template <typename T>
class Numero {
public:
	void setNum(T n);
	T getNum()const;
private:
	T num;
};