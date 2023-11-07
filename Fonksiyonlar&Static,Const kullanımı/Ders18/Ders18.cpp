#include <iostream>

using namespace std;

int alanHesapla(int x, int y){
	int alan = x * y;
	return alan;
}
void fonksiyon() {
	static int sayac = 0;
	sayac++;
	cout << sayac << endl;
}




int main(){
	
	int sonuc = alanHesapla(5, 4);
	cout << "Dikdörgen Alan: " << sonuc;

	cout << endl; 

	

	// STATIC & CONST
	const float pi = 3.14;
	cout << pi << endl;

	fonksiyon();
	fonksiyon();
	fonksiyon();
	return 0;
}