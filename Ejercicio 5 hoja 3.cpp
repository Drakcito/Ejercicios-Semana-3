#include <iostream>
using namespace std;

float devolver_entero(float x) {
	float dev;
	(x < 0) && (dev = -1);
	(x > 0) && (dev = 1);
	(x == 0) && (dev = 0);
	return dev;
}
void main() {
	float num;
	cout << "Digite un numero: ";
	cin >> num;
	cout << "El nuevo numero es: " << devolver_entero(num)<<endl;
	system("pause");
}