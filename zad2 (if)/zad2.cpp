#include <iostream>
using namespace std;
int main(){
	
	float waga;
	float wzrost;
	float bmi;
    cout << "Podaj wage (w kg):";
    cin >> waga;
    cout << "Podaj wzrost (w metrach): ";
    cin >> wzrost;
    bmi = (waga / (wzrost * wzrost));
    cout << "Twoje BMI wynosi: " << bmi << endl;
    if(bmi >= 30) cout << "Twoj stan wagowy: Otylosc" << endl;
    if(bmi >= 25 && bmi <= 29.9) cout << "Twoj stan wagowy: Nadwaga" << endl;
	if(bmi >= 18.5 && bmi <= 24.9) cout << "Twoj stan wagowy: W normie" << endl;
	if(bmi < 18.5) cout << "Twoj stan wagowy: Niedowaga" << endl;
	return 0;	
}