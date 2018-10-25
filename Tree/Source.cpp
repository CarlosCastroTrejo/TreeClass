#include <iostream>
#include "NodoLigado.h"
#include"Arbol.h"

using namespace std;

int main() 
{
	Arbol mytree;
	mytree.Insertar(10);
	mytree.Insertar(9);
	mytree.Insertar(8);
	mytree.Insertar(7);
	mytree.Insertar(11);
	mytree.Insertar(12);
	mytree.Insertar(14);
	
	mytree.InOrder();


	system("pause");
}