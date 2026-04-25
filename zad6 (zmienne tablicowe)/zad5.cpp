#include <iostream>

using namespace std;

int main() {
    int macierz[3][3];
    double suma = 0; 

    cout << "Podaj 9 liczb calkowitych do macierzy 3x3:" << endl;

    for (int i = 0; i < 3; i++) { // Pętla dla wierszy
        for (int j = 0; j < 3; j++) { // Pętla dla kolumn
            cout << "Podaj liczbe dla wiersza " << i + 1 << ", kolumny " << j + 1 << ": ";
            cin >> macierz[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            suma += macierz[i][j];
        }
    }

    double srednia = suma / 9;

    cout << "Srednia liczb: " << srednia << endl;

    return 0;
}