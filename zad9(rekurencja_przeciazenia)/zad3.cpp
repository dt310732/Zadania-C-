#include <iostream>

using namespace std;

// Funkcja rekurencyjna obliczająca potęgę liczby
int CalculatePowerRecursive(int base, int exponent)
{
    // Warunek zakończenia rekurencji
    if (exponent == 0)
    {
        return 1;
    }

    // Wywołanie rekurencyjne
    return base * CalculatePowerRecursive(base, exponent - 1);
}

// Funkcja wyświetlająca wynik
void DisplayResult(int base, int exponent, int result)
{
    cout << base << " do potegi "
         << exponent
         << " wynosi: "
         << result
         << endl;
}

int main()
{
    int base, exponent;
    int result;

    // Pobranie danych od użytkownika
    cout << "Podaj liczbe podstawowa: ";
    cin >> base;

    cout << "Podaj wykladnik: ";
    cin >> exponent;

    // Obliczenie potęgi
    result = CalculatePowerRecursive(base, exponent);

    // Wyświetlenie wyniku
    DisplayResult(base, exponent, result);

    return 0;
}