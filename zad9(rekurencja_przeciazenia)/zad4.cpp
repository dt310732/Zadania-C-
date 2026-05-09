#include <iostream>

using namespace std;

const double PI = 3.1415;

// Funkcja obliczająca objętość sześcianu
double CalculateVolume(double a)
{
    return a * a * a;
}

// Funkcja obliczająca objętość prostopadłościanu
double CalculateVolume(double a, double b, double h)
{
    return a * b * h;
}

// Funkcja obliczająca objętość walca
double CalculateVolume(int wybor, double r, double h)
{
    return PI * r * r * h;
}

// Funkcja wyświetlająca wynik
void DisplayResult(double volume)
{
    cout << "Objetosc wynosi: " << volume << endl;
}

int main()
{
    int wybor;
    double a, b, h, r, volume;

    // Menu wyboru bryły
    cout << "Wybierz bryle do obliczenia objetosci:" << endl;
    cout << "1 - Szescian (V = a^3)" << endl;
    cout << "2 - Prostopadloscian (V = a * b * h)" << endl;
    cout << "3 - Walec (V = pi * r^2 * h)" << endl;

    cout << "Wybierz numer bryly: ";
    cin >> wybor;

    switch (wybor)
    {
        case 1:
            cout << "Podaj dlugosc boku: ";
            cin >> a;

            volume = CalculateVolume(a);
            DisplayResult(volume);
            break;

        case 2:
            cout << "Podaj dlugosc: ";
            cin >> a;

            cout << "Podaj szerokosc: ";
            cin >> b;

            cout << "Podaj wysokosc: ";
            cin >> h;

            volume = CalculateVolume(a, b, h);
            DisplayResult(volume);
            break;

        case 3:
            cout << "Podaj promien podstawy: ";
            cin >> r;

            cout << "Podaj wysokosc: ";
            cin >> h;

            volume = CalculateVolume(3, r, h);
            DisplayResult(volume);
            break;

        default:
            cout << "Niepoprawny wybor." << endl;
    }

    return 0;
}