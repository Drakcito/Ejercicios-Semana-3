#include <iostream>
using namespace std;

float convertir_km(float x) {
	float metros;
	metros = x * 1000;
	return metros;
}
void main() {
	float km;
	cout << "Ingrese la distancia en km: ";
	cin >> km;
	cout << "La distancia de "<<km<<" km"<<" en metros es: " << convertir_km(km)<<endl;
	system("pause");
}