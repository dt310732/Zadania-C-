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

// Funkcja obliczająca silnię
long long CalculateFactorial(int number)
{
    long long factorial = 1;

    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }

    return factorial;
}

// Funkcja wyświetlająca wynik
void DisplayResult(int number, long long factorial)
{
    cout << "Silnia liczby " << number
         << " wynosi: " << factorial << endl;
}

int main()
{
    int number;
    long long factorial;

    // Pobranie liczby
    number = GetNumberFromUser();

    // Obliczenie silni
    factorial = CalculateFactorial(number);

    // Wyświetlenie wyniku
    DisplayResult(number, factorial);

    return 0;
}