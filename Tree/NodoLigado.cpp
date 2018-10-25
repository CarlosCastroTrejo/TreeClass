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

void NodoLigado::Insertar(int valor)
{
	if (valor > dato) 
	{
		if (derecha == NULL) 
		{
			derecha = new NodoLigado(valor);
		}
		else 
		{
			derecha->Insertar(valor);
		}
	}
	else if (valor < dato) 
	{
		
		if (izquierda = NULL) 
		{
			izquierda = new NodoLigado(valor);
		}
		else 
		{
			izquierda->Insertar(valor);
		}
	}

}

void NodoLigado::InOrder(NodoLigado * temp) 
{
	if (temp != NULL) 
	{
		InOrder(temp->izquierda);
		cout << temp->dato<<" ";
		InOrder(temp->derecha);
		
	}

}


NodoLigado::~NodoLigado()
{
}