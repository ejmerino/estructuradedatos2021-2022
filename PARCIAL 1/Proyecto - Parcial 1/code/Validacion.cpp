#pragma warning(disable : 4996)
#include "Validacion.h"
#include <string>

char* Validacion::only_ints(char* msj) {
	char dato[11];
	char c;
	int i = 0;
	printf("%s", msj);
	while ((c = getch()) != 13) {
		if (c >= '0' && c <= '9') {
			printf("%c", c);
			dato[i++] = c;
		}
	}
	dato[i] = '\0';
	std::cout << std::endl;
	return dato;
}

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

char* Validacion::only_letters(char* msj) {
	char dato[50];
	char c;
	int i = 0;
	printf("%s", msj);
	do {
		c = getch();
		if (isalpha(c)) {
			printf("%c", c);
			dato[i++] = c;
		}
	} while (c != 13);
	dato[i] = '\0';
	std::cout << std::endl;
	return dato;
}

void Validacion::borrar(char a[]) {
	for (int i = 0; i < 11; i++) {
		if (a[i] == '\n')
			a[i] = '\0';
	}
}

void Validacion::extraer(char b[]) {
	bool flag = false;

	do {
		int v[10], num, limite;

		limite = strlen(b);

		if (limite != 10) {
			std::cout << "Cedula incorrecta";
			return;
		}
		if (limite == 10) {
			for (int i = 0; i < 10; i++) {
				num = b[i] - 48;
				v[i] = num;
			}

			int vec[10], suma, ultimon;
			static int ultimo;
			if (v[0] == 1 || v[0] == 2) {
				if (v[2] > 0 && v[2] < 6) {

					for (int i = 0; i < 9; i += 2) {
						vec[i] = v[i] * 2;
						if (vec[i] >= 10)
							vec[i] -= 9;
					}

					for (int i = 1; i < 9; i += 2) {
						vec[i] = v[i];

					}

					suma = 0;
					for (int i = 0; i < 10; i++) {
						suma = suma + vec[i];
					}

					if (suma == 10)
						ultimo = 0;
					else if (suma > 10 && suma < 20)
						ultimo = 20;
					else if (suma > 20 && suma < 30)
						ultimo = 30;
					else if (suma > 30 && suma < 40)
						ultimo = 40;
					else {
						std::cout << "Cedula incorrecta";
						return;
					}

					ultimon = ultimo - suma;

					if (ultimon == v[9]) {
						std::cout << "Cedula VERIFICADA";
						flag = true;
					}
					else {
						std::cout << "Cedula incorrecta";
						return;
					}

				}
				else
					std::cout << "Cedula incorrecta";
			}
		}
	} while (flag = !true);


}

std::string Validacion::crearCorreo(std::string first_name, std::string surname, std::string last_name, int cont) {
	std::string dominio = "@espe.edu.ec";
	std::string final_mail;
	std::string name, sur;

	name = tolower(first_name[0]);
	sur = tolower(surname[0]);
	for (int i = 0; i < last_name.length(); i++) {
		last_name[i] = tolower(last_name[i]);
	}

	if (cont == 0) {
		final_mail.append(name);
		final_mail.append(sur);
		final_mail.append(last_name);
		final_mail.append(dominio);
	}
	else {
		final_mail.append(name);
		final_mail.append(sur);
		final_mail.append(last_name);
		final_mail.append(std::to_string(cont));
		final_mail.append(dominio);
	}
	return final_mail;
}

Validacion::~Validacion() {}