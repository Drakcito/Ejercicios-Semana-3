#include <iostream>
using namespace std;

int numero_menor(int x, int y) {
	int menor;
	(x < y) && (menor = x);
	(y < x) && (menor = y);
	return menor;
}

void main() {
	int num1, num2;
	cout << "Ingrese 2 numeros enteros: ";
	cin >> num1 >> num2;
	cout << "El numero menor es: " << numero_menor(num1, num2) << endl;
	system("pause");
}
