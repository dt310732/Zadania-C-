#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void LosujTablice(int* tablica, int rozmiar, int poczatek, int koniec) {
    for (int i = 0; i < rozmiar; i++) {
        *(tablica + i) = poczatek + rand() % (koniec - poczatek + 1);
    }
}

bool SprawdzLiczbe(int* liczba, int* tablica, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        if (*(tablica + i) == *liczba) {
            return true;
        }
    }

    return false;
}

int main() {
    srand(time(NULL));

    int rozmiar;
    int poczatek;
    int koniec;

    cout << "Ile liczb chcesz wylosowac: ";
    cin >> rozmiar;

    cout << "Wartosc poczatkowa: ";
    cin >> poczatek;

    cout << "Wartosc koncowa: ";
    cin >> koniec;

    if (rozmiar <= 0) {
        cout << "Rozmiar tablicy musi byc wiekszy od 0." << endl;
        return 1;
    }

    if (poczatek > koniec) {
        cout << "Wartosc poczatkowa nie moze byc wieksza od koncowej." << endl;
        return 1;
    }

    int* tablica = new int[rozmiar];

    LosujTablice(tablica, rozmiar, poczatek, koniec);

    cout << "Tablica: ";
    for (int i = 0; i < rozmiar; i++) {
        cout << *(tablica + i);

        if (i < rozmiar - 1) {
            cout << ", ";
        }
    }

    cout << endl << endl;

    int liczba;
    int proby = 0;
    bool zgadnieto = false;

    while (!zgadnieto) {
        cout << "Podaj liczbe: ";
        cin >> liczba;

        proby++;

        zgadnieto = SprawdzLiczbe(&liczba, tablica, rozmiar);

        if (zgadnieto) {
            cout << "Zgadles!" << endl;
        } else {
            cout << "Nie zgadles" << endl;
        }
    }

    cout << "Zgadles za " << proby << " razem." << endl;

    delete[] tablica;

    return 0;
}