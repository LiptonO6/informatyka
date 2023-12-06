#include <iostream>
using namespace std;
int main(){
	cout << "podaj 5 liczb: " << endl;
int liczba[ 5 ];
for(int i=0; i <5; i++)
{
    cin >> liczba[ i ];
}

cout << "Podales nastepujace liczby: ";
for(int i=4; i >=5; i--)
{
    cout << liczba[ i ] << ", ";
}
return 0;

}