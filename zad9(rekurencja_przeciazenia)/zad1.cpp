#include <iostream>

using namespace std;

// Funkcja pobierająca liczbę od użytkownika
int GetNumberFromUser()
{
    int number;

    cout << "Podaj liczbe: ";
    cin >> number;

    return number;
}

// Funkcja rekurencyjna obliczająca sumę liczb od 1 do n
int CalculateSumRecursive(int n)
{
    // Warunek zakończenia rekurencji
    if (n == 1)
    {
        return 1;
    }

    // Wywołanie rekurencyjne
    return n + CalculateSumRecursive(n - 1);
}

// Funkcja wyświetlająca wynik
void DisplayResult(int number, int sum)
{
    cout << "Suma liczb od 1 do "
         << number
         << " wynosi: "
         << sum
         << endl;
}

int main()
{
    int number;
    int sum;

    // Pobranie liczby
    number = GetNumberFromUser();

    // Obliczenie sumy
    sum = CalculateSumRecursive(number);

    // Wyświetlenie wyniku
    DisplayResult(number, sum);

    return 0;
}