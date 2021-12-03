#pragma once

template <class T>
class Nodo {

	private:
		T dato;
		Nodo<T>* siguiente;
		Nodo<T>* anterior;
	public:

		Nodo() = default;
		Nodo(T);

		template <class T>
		friend class Lista;

		friend class ListaCalculo;

};