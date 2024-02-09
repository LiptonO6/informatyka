#include <iostream>
using namespace std;

int suma(int a, int b) {
    return a + b;
}

float suma(float a, float b) {
    return a + b;
}

float suma(int a, float b) {
    return a + b;
}

float suma(float a, int b) {
    return a + b;
}

int main() {
    float liczba1, liczba2;

    cout << "Podaj pierwsza liczbe: ";
    cin >> liczba1;

    cout << "Podaj druga liczbe: ";
    cin >> liczba2;

    cout << "Suma: " << suma(liczba1, liczba2) << endl;

    return 0;
}
