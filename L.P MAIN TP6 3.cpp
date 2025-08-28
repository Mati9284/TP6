#include <iostream>
#include <locale.h>
#include <cmath>
#include <string>
using namespace std;
int main ()
{
	setlocale(LC_ALL, "spanish");
	string cadena= "hola";
	int retornar=0;
	cout << "Este programa toma una cadena y devuelve su reverso" << endl;
	for (int i=3; i>-1; i--)
	{
		cout << cadena.at(i); 
	}
	cout << endl;
	cout << "¿Quieres volver a iniciar el programa? (si 1 no 2)" << endl;
	cin >> retornar;
	if (retornar==1)
	{
		return main ();
	}
}
