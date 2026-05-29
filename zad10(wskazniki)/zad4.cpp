#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void LosujTablice(int* tablica, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        *(tablica + i) = rand() % 51;
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

    const int rozmiar = 10;
    int tablica[rozmiar];

    LosujTablice(tablica, rozmiar);

    cout << "Tablica: ";
    for (int i = 0; i < rozmiar; i++) {
        cout << *(tablica + i) << ", ";
    }
    cout << endl;

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

    return 0;
}