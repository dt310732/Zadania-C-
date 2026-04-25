#include <iostream>
using namespace std;

int main() {
    int tab[5];
    int suma = 0;
    double srednia;

    // wczytywanie liczb
    for (int i = 0; i < 5; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> tab[i];
    }

    // obliczanie sumy
    for (int i = 0; i < 5; i++) {
        suma += tab[i];
    }

    // obliczanie średniej
    srednia = (double)suma / 5;

    // wyświetlenie wyniku
    cout << "Srednia liczb: " << srednia << endl;

    return 0;
}