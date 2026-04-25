#include <iostream>
using namespace std;
int main()
{
    int n;
    int parzyste = 0;
    int i = 1;
    cout << "Podaj liczbe calkowita dodatnia N: ";
    cin >> n;
    do{
        if (i%2==0){
            parzyste++;
        }
        i++;
    }while (i <= n);
    cout << "Liczba liczb parzystych od 1 do "<< n << " wynosi: " << parzyste;
}