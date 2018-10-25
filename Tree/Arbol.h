#pragma once
#include "NodoLigado.h"
class Arbol
{
	NodoLigado *raiz;
public:
	Arbol();
	void Insertar(int);
	void InOrder();
	~Arbol();
};

