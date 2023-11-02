#include <iostream>
using namespace std;

int main (){
	
	// liczby calkowite - short, int, long, long lon, unisigned short itd
	// liczb zmiennoprzecinowych - float, double, long double
	// ciag znakow - string
	short a, b;
	cout << "Podaj liczbe 1: ";
	cin >> a;
	cout << "Podaj liczbe 2: ";
	cin >> b;
	
	// instrukcja warunkowa - if(warunek)
	if(a > b){
		cout << a << " > " << b;
	}
	// = operator przypisania
	// == operator porownania
	// != nie rowne czemus
	// <= mniejsze lub rowne
	
	else if(a == b){
		cout << a << " == " << b;
	}
	else{
		cout << a << " < " << b;
	}
	
	
	
	
	
cout << endl;
system("pause");
}