#include <iostream>
#include <locale.h>
#include <cmath>
#include <string>
using namespace std;
int main ()
{
	setlocale(LC_ALL, "spanish");
	float num1=0, num2=0;
	int retornar=0;
	string cadena;
	string cadena1;
	cout << "Este programa toma 2 cadenas y devuelve la concentración de ambas " << endl;
	cout << "Ingrese cadena" << endl;
	cin >> cadena;
	cout << "Ingrese la otra cadena" << endl;
	cin >> cadena1;
	string total = cadena + cadena1;
	cout << "La longitud es... " << total.length() << endl;
	cout << "¿Quieres volver a iniciar el programa? (si 1 no 2)" << endl;
	cin >> retornar;
	if (retornar==1)
	{
		return main ();
	}
}
