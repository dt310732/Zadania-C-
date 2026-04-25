#include <iostream>
using namespace std;
int main(){
	int punkty;
    cout << "Podaj wynik egzaminu (liczba punktow 0-100): ";
    cin >> punkty;
    if(punkty == 100) cout << "Ocena celujaca" << endl;  
	if(punkty <= 99 && punkty >= 85) cout << "Ocena bardzo dobra" << endl; 
	if(punkty <= 84 && punkty >= 70) cout << "Ocena dobra" << endl; 
	if(punkty <= 69 && punkty >= 50) cout << "Ocena dostatecza" << endl; 
	if(punkty <= 49 && punkty >= 0) cout << "Ocena niedostatecza" << endl; 
    return 0;
}