#include "Arbol.h"
#include<iostream>

using namespace std;

Arbol::Arbol()
{
	raiz = NULL;
}

void Arbol::Insertar(int valor,NodoLigado * aux)
{
	NodoLigado *temp=new NodoLigado(valor);
	if (raiz == NULL) 
	{
		raiz = temp;
	}
	else 
	{
		if (valor > aux->GetDato())
		{
			if (aux->GetDerecha() == NULL)
			{
				aux->SetDerecha(temp);
			}
			else
			{
				Insertar(valor, aux->GetDerecha());
			}
			//cout << "mayor" << endl;
		}
		else if (valor < aux->GetDato())
		{
			if (aux->GetIzquierda() == NULL)
			{
				aux->SetIzquierda(temp);
			}
			else
			{
				Insertar(valor, aux->GetIzquierda()); 
			}
			//cout << "menor" << endl;
		}
	}
}

NodoLigado* Arbol::GetRaiz() 
{
	return this->raiz;
}

void Arbol::InOrder(NodoLigado* temp) 
{
	if (temp != NULL)
	{
		InOrder(temp->GetIzquierda());
		cout << temp->GetDato() << " ";
		InOrder(temp->GetDerecha());
	}

}

Arbol::~Arbol()
{
}
