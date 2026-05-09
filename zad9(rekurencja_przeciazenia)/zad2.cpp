#include <iostream>

using namespace std;

// Funkcja pobierająca liczbę elementów od użytkownika
int GetNumberFromUser()
{
    int number;

    cout << "Podaj liczbe elementow: ";
    cin >> number;

    return number;
}

// Funkcja rekurencyjna obliczająca element ciągu Fibonacciego
int CalculateFibonacciRecursive(int n)
{
    // Pierwsze dwa elementy ciągu
    if (n == 0 || n == 1)
    {
        return 1;
    }

    // Wywołanie rekurencyjne
    return CalculateFibonacciRecursive(n - 1) +
           CalculateFibonacciRecursive(n - 2);
}

// Funkcja wyświetlająca ciąg Fibonacciego
void DisplayFibonacciSequence(int elements)
{
    cout << "Ciag Fibonacciego: ";

    for (int i = 0; i < elements; i++)
    {
        cout << CalculateFibonacciRecursive(i);

        if (i < elements - 1)
        {
            cout << ", ";
        }
    }

    cout << endl;
}

int main()
{
    int elements;

    // Pobranie liczby elementów
    elements = GetNumberFromUser();

    // Wyświetlenie ciągu
    DisplayFibonacciSequence(elements);

    return 0;
}