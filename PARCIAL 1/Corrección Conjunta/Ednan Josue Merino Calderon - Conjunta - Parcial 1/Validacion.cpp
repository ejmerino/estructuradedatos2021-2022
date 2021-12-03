#pragma warning(disable : 4996) ;
#include "Validacion.h"

char* Validacion::only_floats(char* msj) {
	char dato[11];
	char c;
	int i = 0;
	printf("%s", msj);
	while ((c = getch()) != 13) {
		if ((c >= '0' && c <= '9') || c == 46) {
			printf("%c", c);
			dato[i++] = c;
		}
	}
	dato[i] = '\0';
	return dato;
}