#include <iostream>
using namespace std;

int main() {

	string sifre = "1234";
	string girilenDeger;

	do {
		cout << "Lutfen sifreyi giriniz: ";
		cin >> girilenDeger;

	} while (sifre != girilenDeger);
	cout << "Sifre Dogru";

	cout << endl;
	return 0;
}