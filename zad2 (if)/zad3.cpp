#include <iostream>
using namespace std;
int main(){
	int liczba;
	cout << "Podaj liczbe calkowita: ";
    cin >> liczba;
	if(liczba %2==0 and liczba %3 == 0){
		cout << "Liczba " << liczba << " jest parzysta" << endl;
		cout << "Liczba " << liczba << " jest podzielna przez 3" << endl;
	}else if(liczba %2==0 && liczba %3 !=0){
		cout << "Liczba " << liczba << " jest parzysta" << endl;
		cout << "Liczba " << liczba << " nie jest podzielna przez 3" << endl;
	}else if(liczba %2 !=0 && liczba %3 == 0){
		cout << "Liczba " << liczba << " nie jest parzysta" << endl;
		cout << "Liczba " << liczba << " jest podzielna przez 3" << endl;
	}else{
		cout << "liczba " << liczba << " nie jest parzysta" << endl;
		cout << "Liczba " << liczba << " nie jest podzielna przez 3" << endl;
	}
	return 0;
}