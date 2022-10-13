#include<iostream>

using namespace std;

float multi(float x, int y) {
	float rezultat = 1;
	for (int i = 0; i < y; i++) {
		rezultat = rezultat * x;
	}
	return rezultat;
}

int main() {
	float num_1;
	float num_2;
	float liczba; int potega; float wynik;
	char wybor;
	char znak;
	bool S = false; bool A = false; bool Q = false;
	cout << "*******KALKULATOR*******" << endl;
	cout << "Standardowy kalkulator -> wprowadz S" << endl;
	cout << "Dodatkowe funkcje -> wprowadz A" << endl;
	cout << "Koniec -> wprowadz Q" << endl;
	cin >> wybor;
	
	
	switch (wybor) {
	case 'S':
		S = true; A = false; Q = false;
		while (S) {
			cout << "Wprowadz rownanie" << endl << endl;
			cin >> num_1 >> znak >> num_2;
			switch (znak) {
			case '+': cout << num_1 << znak << num_2 << " = " << num_1 + num_2 << endl;
				break;
			case '-': cout << num_1 << znak << num_2 << " = " << num_1 - num_2 << endl;
				break;
			case '*': cout << num_1 << znak << num_2 << " = " << num_1 * num_2 << endl;
				break;
			case '/': cout << num_1 << znak << num_2 << " = " << num_1 / num_2 << endl;
				break;
			default: cout << "Bledne rownanie !" << endl;
			}
		}
		
	case 'A':
		A = true; S = false; Q = false;
		cout << "****Potegowanie****" << endl;
		cout << "Podaj liczbe: "; cin >> liczba;
		cout << "Podaj potege: "; cin >> potega;
		cout << endl;
		if (potega > 0) {
			wynik = multi(liczba, potega);
			cout << liczba << " ^" << potega << " = " << wynik << endl;
		}
		else cout << "Wprowadzono bledna wartosc !" << endl;
		break;
		

	case 'Q':
		Q = true; S = false; A = false;
		break;
	}


	return 0;
}