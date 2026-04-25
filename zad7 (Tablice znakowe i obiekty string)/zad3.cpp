#include <iostream>

using namespace std;

int main() {
    char tekst[100];
    char szukanyZnak;
    int pozycje[100]; 
    int licznik = 0;

    cout << "Podaj ciag znakow: ";
    cin.getline(tekst, 100);

    cout << "Podaj znak do zliczenia: ";
    cin >> szukanyZnak;
    
    for (int i = 0; tekst[i] != '\0'; i++) {
        if (tekst[i] == szukanyZnak) {
            pozycje[licznik] = i;
            licznik++;
        }
    }

    cout << "Liczba wystapien znaku '" << szukanyZnak << "': " << licznik << endl;
    
    if (licznik > 0) {
        cout << "Pozycje wystapien: ";
        for (int i = 0; i < licznik; i++) {
            cout << pozycje[i];
            
            if (i < licznik - 1) {
                cout << ", ";
            }
        }
        cout << endl;
    }

    return 0;
}