#include <iostream>
using namespace std;
int main(){
	cout << "podaj 5 liczb: " << endl;
int liczba[ 5 ];
for(int i=0; i <5; i++)
{
    cin >> liczba[ i ];
}
cout << "Liczby podzielne przez 2: ";
for(int i=0; i <5; i++)
{
	if(liczba[ i ] %2==0 ){
	cout << liczba[ i ] << ", ";
}
}
}