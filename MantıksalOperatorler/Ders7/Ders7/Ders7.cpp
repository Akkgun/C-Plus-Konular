#include <iostream>

using namespace std;

int main() {

	int sayi1, sayi2;
	cout << "1.sayi giriniz = ";
	cin >> sayi1;
	cout << "2.sayi giriniz = ";
	cin >> sayi2;

	if (sayi1 > 0 and sayi2 > 0)
	{
		cout << "Iki sayida pozitif";
	}
	else if (sayi1 < 0 and sayi2 < 0)
	{
		cout << "Her iki sayida negatif";
	}
	else if (sayi1 < 0 or sayi2 < 0)
	{
		cout << "Sayilarinizdan biri negatif";
	}
	else {
		cout << "Hatali";
	}
	int x = 0;
	if (x >= 0)
		cout << endl << "x sifira esit veya buyuk";


		return 0;
}