/* Universidad de las Fuerzas Armadas - ESPE
   Software
   Sobrecarga de Operadores
   Autor:
   -Jhoel David Chicaiza Collantes
   -Ednan Josue Merino Calderon
   -Daniel Alberto Vizcarra Gaibor
   -Pablo David Yánez Alvear

   Fecha de creación: 04/11/2021
   Fecha de modificación: 05/11/2021
*/

#pragma once

class Datos {
private:
	int a,d,g;
	float b,e,h;
	double c,f,i;	
public:
	/*
	* Constructor for Datos
	*/
	Datos();
	/*
	* Destructor for Datos
	*/
	~Datos();

	/*
	* Setters and Getters
	*/
	void set_a(int);
	int get_a();

	void set_b(double);
	double get_b();

	/*void set_c(double);
	double get_c();

	void set_d(int);
	int get_d();

	void set_e(float);
	float get_e();

	void set_f(double);
	double get_f();

	void set_g(int);
	int get_g();

	void set_h(float);
	float get_h();

	void set_i(double);
	double get_i(); */
};