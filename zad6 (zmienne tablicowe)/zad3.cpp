#include <iostream>
using namespace std;

int main() {
    const int ROZMIAR = 10;
    int tablica[ROZMIAR];
    int najmniejsza;

    cout << "Podaj 10 liczb calkowitych:\n";

    for (int i = 0; i < ROZMIAR; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> tablica[i];
    }

    najmniejsza = tablica[0];

    for (int i = 1; i < ROZMIAR; i++) {
        if (tablica[i] < najmniejsza) {
            najmniejsza = tablica[i];
        }
    }

    cout << "Najmniejsza liczba to: " << najmniejsza << endl;

    return 0;
}
