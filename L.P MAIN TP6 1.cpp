#include <iostream>
#include <locale.h>
#include <cmath>
#include <string>
using namespace std;
int main ()
{
	setlocale(LC_ALL, "spanish");
	int retornar=0;
	string cadena;
	cout << "Este programa toma una cadena y devuelve su longitud" << endl;
	cout << "Ingrese cadena" << endl;
	cin >> cadena;	
	cout << "La longitud es... " << cadena.length() << endl;
	cout << "¿Quieres volver a iniciar el programa? (si 1 no 2)" << endl;
	cin >> retornar;
	if (retornar==1)
	{
		return main ();
	}
}
