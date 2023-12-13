#include <iostream>
#include <cstring>

int main() {
    const int maxLength = 100;
    char nameSurname[maxLength];

    // Pobieranie imienia i nazwiska od użytkownika
    std::cout << "Twoje dane osobowe: ";
    std::cin.getline(nameSurname, maxLength);

    // Znajdowanie pozycji znaku spacji
    int spaceIndex = -1;
    for (int i = 0; i < maxLength && nameSurname[i] != '\0'; ++i) {
        if (nameSurname[i] == ' ') {
            spaceIndex = i;
            break;
        }
    }

    // Znajdowanie pozycji znaku końca tekstu (\0)
    int nullIndex = -1;
    for (int i = 0; i < maxLength; ++i) {
        if (nameSurname[i] == '\0') {
            nullIndex = i;
            break;
        }
    }

    // Wyświetlanie indeksów znaku spacji i znaku końca tekstu
    std::cout << "Pozycja spacji: " << spaceIndex << std::endl;
    std::cout << "Pozycja końca: " << nullIndex << std::endl;

    return 0;
}