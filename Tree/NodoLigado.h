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
	NodoLigado* GetDerecha();
	void SetDerecha(NodoLigado*);
	void SetIzquierda(NodoLigado*);

	~NodoLigado();
};

