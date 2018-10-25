#pragma once
#include "NodoLigado.h"
class Arbol
{
	NodoLigado *raiz;
public:
	Arbol();
	void Insertar(int,NodoLigado*);
	void InOrder(NodoLigado*);
	NodoLigado* GetRaiz();
	~Arbol();
};

