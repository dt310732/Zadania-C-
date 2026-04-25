#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    int wynik = 0;
    cout << "Podaj liczbę N: ";
    cin >> n;
    cout << "Kwadraty liczb od 1 do "<< n << ":" << endl;
    for (int i=1; i <=n; i++){
        cout << i << "^"<<"2 = " << pow(i,2) << endl;
    }
    return 0;
}