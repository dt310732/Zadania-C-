#include <iostream>
using namespace std;
int main()
{
    float liczba1;
    float liczba2;
    char znak;
    float wynik;
    cout<<"Podaj liczbe 1: ";
    cin >> liczba1;
    cout<<"Podaj liczbe 2: ";
    cin >> liczba2;
    cout<<"Podaj znak dzialania (+, -, *, /): ";
    cin >> znak;
    switch(znak){
        case '+':
            wynik = liczba1 + liczba2;
            break;
        case '-':
            wynik = liczba1 - liczba2;
            break;
        case '*':
            wynik = liczba1 * liczba2;
            break;
        case '/':
            wynik = liczba1 / liczba2;
            break;
        default:
            cout << "Wprowadzono zly znak";
            return 1;
        }
    cout << wynik << endl;
    return 0;
}