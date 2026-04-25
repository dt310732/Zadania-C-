#include <iostream>
#include <cstring> // Biblioteka wymagana do użycia strlen()

using namespace std;

int main() {
    char tekst[100];
    char odwrocony[100];

    cout << "Podaj ciag znakow: ";
    // Wczytujemy cały wiersz (łącznie ze spacjami)
    cin.getline(tekst, 100);

    // 1. Obliczanie długości ciągu za pomocą strlen()
    int dlugosc = strlen(tekst);

    for (int i = 0; i < dlugosc; i++) {
        // Pierwszy znak nowej tablicy [0] to ostatni znak starej [dlugosc - 1]
        odwrocony[i] = tekst[dlugosc - 1 - i];
    }

    odwrocony[dlugosc] = '\0';

    cout << "Odwrocony ciag: " << odwrocony << endl;

    return 0;
}