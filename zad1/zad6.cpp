#include <iostream>
using namespace std;

int main(){
	int liczba1;
	int liczba2;
	int suma = liczba1 + liczba2;
	cout << "Podaj pierwsza liczbe: ";
	cin >> liczba1;
	cout << "Podaj druga liczbe: ";
	cin >> liczba2;
	cout << "Suma: " << liczba1 + liczba2 << endl;
	if(suma % 2 == 0){
		cout << "Suma jest liczba parzysta";
	}
	else{
		cout << "Suma nie jest liczba parzysta";
	}
	return 0;
}