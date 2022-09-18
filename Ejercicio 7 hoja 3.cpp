#include <iostream>
using namespace std;

float convertir_pulgadas(float x) {
	float pulgadas;
	pulgadas = x / 2.54;
	return pulgadas;
}
void main() {
	float cm;
	cout << "Ingrese una medida expresada en centimetros: ";
	cin >> cm;
	cout << "La medida en pulgas es: " << convertir_pulgadas(cm) << endl;
	system("pause");
}