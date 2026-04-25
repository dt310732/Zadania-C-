#include <iostream>
using namespace std;
int main()
{
    float celcjusze;
    char znak;
    float wynik;
    cout<<"Podaj temperature w stopniach Celsjusza: ";
    cin >> celcjusze;
    cout<<"Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
    cin >> znak;
    switch(znak){
        case 'K':
            wynik = celcjusze + 273.15;
            break;
        case 'F':
            wynik = (celcjusze * 9/5) + 32;
            break;
        default:
            cout << "Wprowadzono zly znak";
            return 1;
        }
    cout << wynik << endl;
    return 0;
}