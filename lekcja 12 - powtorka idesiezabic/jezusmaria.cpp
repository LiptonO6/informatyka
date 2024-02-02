#include<iostream>
using namespace std;

int main()
{
    char tablica[100];
    cout<<"Podaj imie i nazwisko: "; 
    cin.getline(tablica,100); //wykorzystanie metody getline()
    cout<<"Twoje dane osobowe: "<<tablica<<endl;
    int position = -1;
    for (int i = 0; tablica[i] != '\0'; ++i){
    	if (tablica[i] == ' '){
    		position = i;
    		break;
		}
	}
	if (position != -1){
    cout<<"Pozycja spacji: "<<position<<endl;
} else {
	cout<<"Brak spacji w tekscie "<<endl;
}
    return 0;
}