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
#include <stdlib.h>

class Carro{
public:
	Carro()=default;
	Carro(const Carro&);
	~Carro();
	char* get_marca();
	void set_marca(char[]);
	char* get_placa();
	void set_placa(char[]);
	char* get_ano();
	void set_ano(char[]);
	void to_string(void);
	void generar_dueno(void);
	void registro(void);
private:
	char* marca;
	char* placa;
	char* ano;
};
