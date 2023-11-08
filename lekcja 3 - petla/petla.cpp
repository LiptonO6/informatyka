#include <iostream>
using namespace std;

int main(){
	/* inkrementacja
		i = 1 + 1
		i += 1
		i++
		Dekrementacja
		i = i - 1
		i -= 1
		i--
		for(wartoscPoczątkowa; warunekKonczacy; krok)
	*/
	for(int i = 69; i < 71 ; i++){ // i - zmienna lokalna, istnieje tylko w klamrach petli
		cout << i << endl;
	}
	
	// petla zagniezdzona
	for(int i = 0; i < 6; i++){
	for(int j = 0; j < 3; j++ ){
		cout << "*";
	}
	cout << endl;
	}
	
cout << endl;
system("pause");
}