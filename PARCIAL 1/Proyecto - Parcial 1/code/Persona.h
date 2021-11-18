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

class Persona{
public:
	Persona();
	~Persona();
	int getId(void);
	void setId(int newId);
	int getEdad(void);
	void setEdad(int newEdad);
	std::string getCorreo(void);
	void setCorreo(std::string newCorreo);
	void to_string(void);
	void generar_correo(void);
protected:
private:
	int Id;
	int edad;
	std::string correo;
};
