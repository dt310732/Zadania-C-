#include <iostream>
using namespace std;
int main()
{
    int szerokosc;
    int wysokosc;
    int margin = 0;
    cout << "Podaj szerokosc: ";
    cin >> szerokosc;
    cout << "Podaj wysokosc: ";
    cin >> wysokosc;
    for(int i=0;i<wysokosc;i++){
        for(int j=0;j<szerokosc;j++){
            if(margin >= j && j < szerokosc - margin){
                cout << " ";
            }else{
                cout << "*";
            }
        }
        margin += 1;
        cout << endl;
    }
    return 0;
}