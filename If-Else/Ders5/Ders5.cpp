#include <iostream>

using namespace std;
int main() {

	//þifre belirleme
	int sifre;
	cout << "Lutfen yeni sifrenizi giriniz : ";
	cin >> sifre;
	cout << "Sifreniz Kaydedildi.";

	//þifre sorma
	int kullanicisifre;
	cout << "Lutfen sifreyi giriniz : ";
	cin >> kullanicisifre;
	if (kullanicisifre == sifre)
	{
		cout << "Giris basarili.";
	}
	else if (kullanicisifre != sifre){
		
		cout << "Giris hatali.";
	}
	cout << endl;
	return 0;
}