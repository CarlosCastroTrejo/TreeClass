#include "NodoLigado.h"
#include<iostream>
using namespace std;

NodoLigado::NodoLigado(int valor)
{
	izquierda = NULL;
	derecha = NULL;
	this->dato = valor;
}

NodoLigado::NodoLigado()
{
	izquierda = NULL;
	derecha = NULL;
	this->dato = 0;
}

void NodoLigado::SetDato(int valor) 
{
	this->dato = valor;
}

int NodoLigado::GetDato() 
{
	return this->dato;
}

NodoLigado* NodoLigado::GetIzquierda()
{
	return this->izquierda;
}

NodoLigado* NodoLigado::GetDerecha()
{
	return this->derecha;
}

void NodoLigado::SetDerecha(NodoLigado* temp) 
{
	this->derecha = temp;
}

void NodoLigado::SetIzquierda(NodoLigado* temp)
{
	this->izquierda = temp;
}


NodoLigado::~NodoLigado()
{
}
