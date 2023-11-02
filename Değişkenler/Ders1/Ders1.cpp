#include <iostream> //Kütüphane

using namespace std;
int main() {

	string isim = "Arda Akgün"; // string = metin
	int yas = 20;  //integer 
	char notOrtalamasi = 'A';  //char = karakter
	float sayisalnotortalamasi = 3.25; //float&double = ondalýklý sistem // double daha büyük ondalýklý sayýlar için kullanýlýr.
	bool sinav = true;//bool = 1 bit,1 ya da 0 deðerini ifade eder

	cout << "Hello World \n";
	cout << "Hello World" << endl << endl << "Ogrenci Adi - Soyadi : " << isim << endl; //Ýki farklý boþluk býrakma \n,endl
	cout << "Ogrenci Yasi : " << yas << endl;
	cout << "Not Ortalamasi : " << notOrtalamasi << endl;
	cout << "Ogrenci Sayisal Not Ortalamasi : " << sayisalnotortalamasi << endl;
	cout << "Ogrenci Sinava Girdi mi : " << sinav << endl;
	cout << endl;

	return 0;
}