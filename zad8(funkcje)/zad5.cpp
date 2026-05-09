#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Funkcja sprawdzająca, czy liczba jest za mała lub za duża
void DuzaMala(int liczba, int wylosowanaLiczba)
{
    if (liczba < wylosowanaLiczba)
    {
        cout << "Za malo" << endl;
    }
    else if (liczba > wylosowanaLiczba)
    {
        cout << "Za duzo" << endl;
    }
}

// Funkcja sprawdzająca poprawność liczby
bool CheckLiczba(int liczba, int wylosowanaLiczba)
{
    return liczba == wylosowanaLiczba;
}

int main()
{
    int liczba;
    
    // Ustawienie ziarna generatora liczb losowych
    srand(time(NULL));

    // Losowanie liczby z zakresu 1-100
    int wylosowanaLiczba = rand() % 100 + 1;

    do
    {
        cout << "Podaj liczbe: ";
        cin >> liczba;

        if (CheckLiczba(liczba, wylosowanaLiczba))
        {
            cout << "Gratulacje! Odgadles liczbe." << endl;
        }
        else
        {
            DuzaMala(liczba, wylosowanaLiczba);
        }

    } while (!CheckLiczba(liczba, wylosowanaLiczba));

    return 0;
}