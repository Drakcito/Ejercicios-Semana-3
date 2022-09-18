#include <iostream>
using namespace std;
float descuento(float cash) {
	float desc=0;
	(cash >= 2000) && (desc = cash - (cash * 0.3));
	(cash <= 500) && (desc = cash - (cash * 0.05));
	return desc;
}
int main() {
	float monto;
	cout << "Ingrese el monto: ";
	cin >> monto;
	cout << "El monto con descuento es: " << descuento(monto) << endl;
	return 0;
}
