#pragma once
class NodoLigado
{
	NodoLigado *derecha;
	NodoLigado *izquierda;
	int dato;
public:
	NodoLigado(int);
	NodoLigado();
	void SetDato(int);
	int GetDato();
	NodoLigado* GetIzquierda();
	void Insertar(int);
	void InOrder(NodoLigado*);
	~NodoLigado();
};

