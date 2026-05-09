#include <iostream>
#include <string>

using namespace std;

// Funkcja wczytująca tekst od użytkownika
string GetTextFromUser()
{
    string text;

    cout << "Podaj ciag znakow: ";
    getline(cin, text);

    return text;
}

// Funkcja odwracająca ciąg znaków
string ReverseString(string text)
{
    string reversed = "";

    for (int i = text.length() - 1; i >= 0; i--)
    {
        reversed += text[i];
    }

    return reversed;
}

// Funkcja wyświetlająca wynik
void DisplayResult(string text)
{
    cout << "Odwrocony ciag: " << text << endl;
}

int main()
{
    string text;
    string reversedText;

    // Pobranie tekstu
    text = GetTextFromUser();

    // Odwrócenie tekstu
    reversedText = ReverseString(text);

    // Wyświetlenie wyniku
    DisplayResult(reversedText);

    return 0;
}