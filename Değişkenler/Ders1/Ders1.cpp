#include <iostream> //K�t�phane

using namespace std;
int main() {

	string isim = "Arda Akg�n"; // string = metin
	int yas = 20;  //integer 
	char notOrtalamasi = 'A';  //char = karakter
	float sayisalnotortalamasi = 3.25; //float&double = ondal�kl� sistem // double daha b�y�k ondal�kl� say�lar i�in kullan�l�r.
	bool sinav = true;//bool = 1 bit,1 ya da 0 de�erini ifade eder

	cout << "Hello World \n";
	cout << "Hello World" << endl << endl << "Ogrenci Adi - Soyadi : " << isim << endl; //�ki farkl� bo�luk b�rakma \n,endl
	cout << "Ogrenci Yasi : " << yas << endl;
	cout << "Not Ortalamasi : " << notOrtalamasi << endl;
	cout << "Ogrenci Sayisal Not Ortalamasi : " << sayisalnotortalamasi << endl;
	cout << "Ogrenci Sinava Girdi mi : " << sinav << endl;
	cout << endl;

	return 0;
}