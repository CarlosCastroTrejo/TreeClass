#include <iostream>
#include "NodoLigado.h"
#include"Arbol.h"

using namespace std;

int main() 
{
	Arbol mytree;

	mytree.Insertar(10,mytree.GetRaiz());
	mytree.Insertar(9, mytree.GetRaiz());
	mytree.Insertar(8, mytree.GetRaiz());
	mytree.Insertar(7, mytree.GetRaiz());
	mytree.Insertar(11, mytree.GetRaiz());
	mytree.Insertar(12, mytree.GetRaiz());
	mytree.Insertar(14, mytree.GetRaiz());
	
	mytree.InOrder(mytree.GetRaiz());


	system("pause");
}