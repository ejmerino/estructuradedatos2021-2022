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
	Carro();
	~Carro();
	std::string getMarca(void);
	void setMarca(std::string newMarca);
	std::string getPlaca(void);
	void setPlaca(std::string newPlaca);
	int getAno(void);
	void setAno(int newAno);
	void to_string(void);
	void generar_dueno(void);
	void registro(void);

protected:
private:
	std::string marca;
	std::string placa;
	int ano;
};
