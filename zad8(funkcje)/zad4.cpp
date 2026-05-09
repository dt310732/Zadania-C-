#include <iostream>

using namespace std;

// Funkcja wczytująca liczby do tablicy
void GetArrayFromUser(int tab[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> tab[i];
    }
}

// Funkcja znajdująca największą wartość
int FindMaxValue(int tab[], int size)
{
    int max = tab[0];

    for (int i = 1; i < size; i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
    }

    return max;
}

// Funkcja wyświetlająca wynik
void DisplayResult(int max)
{
    cout << "Najwieksza liczba: " << max << endl;
}

int main()
{
    const int SIZE = 5;
    int numbers[SIZE];
    int maxValue;

    // Wczytanie liczb
    GetArrayFromUser(numbers, SIZE);

    // Znalezienie największej wartości
    maxValue = FindMaxValue(numbers, SIZE);

    // Wyświetlenie wyniku
    DisplayResult(maxValue);

    return 0;
}