#include <iostream>
using namespace std;
int main()
{
    int start = 2;
    int n;
    cout << "Podaj liczbe N: ";
    cin >> n;
    cout << "Liczby parzyste od 2 do " << n << ":" << endl;
    while (start <= n){
        cout << start << endl;
        start +=2;
    }
    return 0;
}