#include <iostream>
using namespace std;
float descuento(float cash) {
	float desc;
	(cash > 10000) && (desc = cash - (cash * 0.2));
	(cash < 10000) && (desc = cash - (cash * 0.1));
	(cash == 10000) && (desc = cash - (cash * 0));
	return desc;
}
void main() {
	float monto;
	cout << "Ingrese el monto: ";
	cin >> monto; 
	cout << "El monto a pagar es: " << descuento(monto) << endl;
	system("pause");
}
