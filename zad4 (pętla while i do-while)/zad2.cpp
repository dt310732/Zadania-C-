#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    int wynik = 0;
    cout << "Podaj liczbe N: ";
    cin >> n;
    while (i <= n){
        wynik += i;
        i++;
    }
    cout << "Suma liczb naturalnych do " << n << ": " << wynik; 
    return 0;
}