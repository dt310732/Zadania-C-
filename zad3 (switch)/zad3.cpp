#include <iostream>
using namespace std;
int main()
{
    float godziny;
    char znak;
    float wynik;
    cout<<"Podaj liczbe godzin parkowania: ";
    cin >> godziny;
    cout<<"Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): ";
    cin >> znak;
    switch(znak){
        case 'S':
            wynik = godziny * 5;
            break;
        case 'M':
            wynik = godziny * 3;
            break;
        case 'A':
            wynik = godziny * 10;
            break;
        default:
            cout << "Wprowadzono zly znak";
            return 1;
        }
    cout << "Oplata za parkowanie: " << wynik << " zl" << endl;
    return 0;
}