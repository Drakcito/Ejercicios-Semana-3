#include <iostream>
using namespace std;
int convertir_hora(int seg2) {
	int horas, minutos, segundos;
	horas = seg2 / 3600;
	minutos = (seg2 - (horas * 3600)) / 60;
	segundos = (seg2-((horas * 3600) + (minutos * 60)));
	return horas;
}
int convertir_minutos(int seg2) {
	int horas, minutos, segundos;
	horas = seg2 / 3600;
	minutos = (seg2 - (horas * 3600)) / 60;
	segundos = (seg2-((horas * 3600) + (minutos * 60)));
	return minutos;
}
int convertir_segundos(int seg2) {
	int horas, minutos,segundoss;
	horas = seg2 / 3600;
	minutos = (seg2 - (horas * 3600)) / 60;
	segundoss = (seg2-((horas * 3600) + (minutos * 60)));
	return segundoss;
}
void main() {
	int seg;
	cout << "Ingrese el tiempo en segundos: ";
	cin >> seg;

	cout << "Horas: " << convertir_hora(seg) << endl;
	cout << "Minutos: " << convertir_minutos(seg) << endl;
	cout << "Segundos: " << convertir_segundos(seg) << endl;
	system("pause");
}
