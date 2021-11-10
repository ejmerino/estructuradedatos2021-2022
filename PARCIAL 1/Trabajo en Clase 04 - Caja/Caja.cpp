/* Universidad de las Fuerzas Armadas - ESPE
   Software
   NOMBRE DEL PROGRAMA
   Autor:
   -Ednan Josue Merino Calderon
   Fecha de creación: 02/07/2021
   Fecha de modificación: 02/07/2021
*/

#include "Caja.h"
#include <iostream>

using namespace std;

template <typename T>
Caja<T>::Caja() {
	this->ancho = 1;
	this->alto = 1;
	this->profundidad = 1;
}
template <typename T>
Caja<T>::Caja(T _alto) {
	this->alto = _alto;
	this->ancho = 1;
	this->profundidad = 1;
}
template <typename T>
Caja<T>::Caja(T _alto, T _ancho) {
	this->alto = _alto;
	this->ancho = _ancho;
	this->profundidad = 1;
}
template <typename T>
Caja<T>::Caja(T _alto, T _ancho, T _profundidad) {
	this->alto = _alto;
	this->ancho = _ancho;
	this->profundidad = _profundidad;
}

template <typename T>
void Caja<T>::set_alto(T _alto) {
	this->alto = _alto;
}

template<typename T>
T Caja<T>::get_alto() {
	return alto;
}

template <typename T>
void Caja<T>::set_ancho(T _ancho) {
	this->ancho = _ancho;
}

template<typename T>
T Caja<T>::get_ancho() {
	return ancho;
}

template <typename T>
void Caja<T>::set_profundidad(T _profundidad) {
	this->profundidad = _profundidad;
}

template<typename T>
T Caja<T>::get_profundidad() {
	return profundidad;
}

template <typename T>
void Caja<T>::mostrarMedidas() {
	cout << "\nValor del atributo Alto " << this->alto << endl;
	cout << "\nValor del atributo Ancho " << this->ancho << endl;
	cout << "\nValor del atributo Profundidad " << this->profundidad << endl;
}