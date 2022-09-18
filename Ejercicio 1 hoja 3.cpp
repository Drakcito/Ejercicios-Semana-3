//Ejercicio 1 hoja 3
#include <iostream>
using namespace std;

int mayor_3(int x, int y, int z) {
	int mayor;
	(x > y && x > z) && (mayor = x);
	(y > x && y > z) && (mayor = y);
	(z > x && z > y) && (mayor = z);
	return mayor;
}
void main() {
	int a, b, c;
	int mayor;
	cout << "Ingrese el primer numero: "; cin >> a;
	cout << "Ingrese el segundo numero: "; cin >> b;
	cout << "Ingrese el tercer numero: "; cin >> c;
	mayor = mayor_3(a, b, c);
	cout << "El numero mayor es: " << mayor;
}
