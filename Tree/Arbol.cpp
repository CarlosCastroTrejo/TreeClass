#include "Arbol.h"
#include<iostream>

using namespace std;

Arbol::Arbol()
{
	raiz = NULL;
}

void Arbol::Insertar(int valor)
{
	NodoLigado *temp=new NodoLigado(valor);
	if (raiz == NULL) 
	{
		raiz = temp;
	}
	else 
	{
		delete temp;
		raiz->Insertar(valor);
	}
}

void Arbol::InOrder() 
{
	if (raiz == NULL) 
	{
		cout << " Arbol vacio"<<endl;
	}
	else 
	{
		raiz->InOrder(raiz);
	}

}

Arbol::~Arbol()
{
}
