#include <iostream>
using namespace std;

char cadena(char cadena[20]) {
	cout << "Escribe una frase: ";
	cin >> cadena;
	return cadena[0];
}
void main() {
	char frase[20];
	cout << "La primera letra de la frase es: " << cadena(frase)<<endl;
	system("pause");
}