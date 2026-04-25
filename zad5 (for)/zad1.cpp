#include <iostream>
using namespace std;
int main()
{
    int n;
    int wynik = 0;
    cout << "Podaj liczbę N: ";
    cin >> n;
    
    for (int i=1; i <=n; i++){
        wynik +=i;
    }
    cout << "Suma liczb od 1 do " << n << " wynosi: " << wynik;
}