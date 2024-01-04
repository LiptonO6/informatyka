#include <iostream>
using namespace std;
int main(){
	char znak;
	float liczba1, liczba2;
	
	cout << "Podaj pierwszą liczbe: ";
	cin >> liczba1;
	cout << "Podaj druga liczbe: ";
	cin >> liczba2;
	cout << "Podaj znak (+, -, *, /): ";
	cin >> znak;
	
	float wynik;
	
	switch(znak){
		case '+':
			wynik = liczba1 + liczba2;
			break;
		case '-':
			wynik = liczba1 - liczba2;
			break;
		case '*':
			wynik = liczba1 * liczba2;
			break;
		case '/':
			wynik = liczba1 / liczba2;
			break;
	}
	cout << wynik;
	return 0;
}