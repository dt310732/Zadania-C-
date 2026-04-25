#include <iostream>
using namespace std;

int main() {
    int tab[5];

    // wczytywanie liczb
    cout << "Wprowadz 5 liczb calkowitych:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> tab[i];
    }

    // zamiana liczb ujemnych na 0
    for (int i = 0; i < 5; i++) {
        if (tab[i] < 0) {
            tab[i] = 0;
        }
    }

    // wyświetlenie zmodyfikowanej tablicy
    cout << "Liczby ujemne zamienione na 0: ";
    for (int i = 0; i < 5; i++) {
        cout << tab[i];
        if (i < 4) cout << ", ";
    }
    cout << endl;

    return 0;
}