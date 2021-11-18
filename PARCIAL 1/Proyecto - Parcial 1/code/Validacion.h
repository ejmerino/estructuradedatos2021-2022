#pragma once
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Validacion {
public:
	Validacion() = default;
	char* only_ints(char*);
	char* only_floats(char*);
	char* only_letters(char*);
	void borrar(char[]);
	void extraer(char[]);
	std::string crearCorreo(std::string, std::string, std::string, int);
	~Validacion();

};