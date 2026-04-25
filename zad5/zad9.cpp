#include <iostream>
using namespace std;

int main() {
    int licznik = 0;

    for (int i = 1; i <= 9; i++) {        // setki (nie może być 0)
        for (int j = 0; j <= 9; j++) {    // dziesiątki
            for (int k = 0; k <= 9; k++) { // jedności
                
                if (i != j && i != k && j != k) {
                    cout << i << j << k << endl;
                    licznik++;
                }
            }
        }
    }

    cout << "Liczb bez powtarzajacych sie cyfr: " << licznik << endl;

    return 0;
}