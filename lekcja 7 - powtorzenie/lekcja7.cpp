#include <iostream>
using namespace std;

int main(){
	
	// while 30...10 parzyste
	
	short a = 30;
	while( a >= 10 ){
	cout << a << ",";
		a += 2;
	}
cout << endl;
	// do..while pytac o liczbe zmniejszac jej wartosc o polowe do 0
	
	short b;
	cout << "podaj liczbe: ";
	cin >> b;
	do{
	cout << b << ", ";
	b /= 2;
	}while( b > 0 );

cout << endl;
system("pause");
}