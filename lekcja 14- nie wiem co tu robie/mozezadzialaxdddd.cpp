#include <iostream>
using namespace std;

int main(){
	float a = 1;
	float b = 1;
	float c = 1;
	float *aa = &a + 1;
	float *bb = &b +2;
	float *cc = &b +3;
	cout << "wartosci zmiennych" << endl;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << "wartosci zmiennych po modyfikacji" << endl;
	cout << *aa << endl;
	cout << *bb << endl;
	cout << *cc << endl;
	
	return 0;
}