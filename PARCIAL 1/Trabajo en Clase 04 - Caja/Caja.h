/* Universidad de las Fuerzas Armadas - ESPE
   Software
   NOMBRE DEL PROGRAMA
   Autor:
   -Ednan Josue Merino Calderon
   Fecha de creación: 02/07/2021
   Fecha de modificación: 02/07/2021
*/

#pragma once
template <typename T>
class Caja {
public:
	Caja();
	Caja(T);
	Caja(T, T);
	Caja(T, T, T);
	void set_ancho(T);
	T get_ancho();
	void set_alto(T);
	T get_alto();
	void set_profundidad(T);
	T get_profundidad();

	void mostrarMedidas();
private:
	T ancho;
	T alto;
	T profundidad;
};