#include <iostream>
using namespace std;
int main()
{
    int szerokosc;
    int wysokosc;
    cout << "Podaj szerokosc: ";
    cin >> szerokosc;
    cout << "Podaj wysokosc: ";
    cin >> wysokosc;
    for(int i=1;i<=wysokosc;i++){
        for(int j=1;j<=szerokosc;j++){
            if(i == 1 || i == wysokosc){
                cout << "-";
            }else if(j == 1 || j == szerokosc){
                cout << "|";
            }else{
                if((i+j) %2==0){
                    cout << "#";
                }else{
                    cout << "*";
                }
            }
        }
        cout <<endl;
    }
    return 0;
}