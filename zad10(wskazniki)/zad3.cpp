#include <iostream>
using namespace std;

int ObliczSume(int* tablica, int rozmiar) {
    int suma = 0;

    for (int i = 0; i < rozmiar; i++) {
        suma += *(tablica + i);
    }

    return suma;
}

int main() {
    int tablica[4] = {5, 10, 15, 20};
    int rozmiar = 4;

    int suma = ObliczSume(tablica, rozmiar);

    cout << "Suma elementow tablicy: " << suma << endl;

    for (int i = 0; i < rozmiar; i++) {
        cout << "Podaj nowa wartosc dla elementu " << i << ": ";
        cin >> *(tablica + i);
    }

    suma = ObliczSume(tablica, rozmiar);

    cout << "Nowa tablica:" << endl;

    for (int i = 0; i < rozmiar; i++) {
        cout << *(tablica + i) << " ";
    }

    cout << endl;
    cout << "Nowa suma elementow tablicy: " << suma << endl;

    return 0;
}