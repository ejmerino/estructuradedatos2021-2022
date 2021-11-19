#pragma once

template<typename T>
class Conjunto {
private:
	T* valores;
	int dimension;
public:
	Conjunto() = default;
	Conjunto(int);
	Conjunto(T*);
	T* getValores();
	int getDimension();
	void ingresarValores(int);
	void unir(T*, T*, int, int);
	void intersecar(T*, T*, int, int);
	void imprimir();

};