#include <iostream>
using namespace std;
float elevaral_cubo(float x) {
	float cubo;
	cubo = x * x * x;
	return cubo;
}
void main() {
	float num;
	cout << "Digite un numero a elevar al cubo: ";
	cin >> num;

	cout << "El numero al cubo es: " << elevaral_cubo(num)<<endl;

	system("pause");
}