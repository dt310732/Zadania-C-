#include <iostream>
using namespace std;
int main()
{
    float liczba;
    char znak;
    do{
        cout << "Podaj liczbe: ";
        cin >> liczba;
        cout << "Wprowadziles liczbe: " << liczba << endl;
        cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n): " << endl;
        cin >> znak;
        if (znak == 'n'){
            cout << "Dziekuje za wprowadzenie liczb!";
            return 0;
        } 
    }while (true);
}