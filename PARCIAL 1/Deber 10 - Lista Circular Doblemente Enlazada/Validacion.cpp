#pragma warning(disable : 4996)
#include "Validacion.h"

char* Validacion::solo_int(char* msj) {
	char dato[20];
	char c;
	int i = 0;
	printf("%c", *msj);
	while ((c = getch()) != 13) {
		if (c >= '0' && c <= '9') {
			printf("%c", c);
			dato[i++] = c;
		}
	}
	dato[i] = '\0';
	return dato;
}

Validacion::~Validacion() {}