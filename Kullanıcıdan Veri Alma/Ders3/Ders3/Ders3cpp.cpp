#include <iostream>

using namespace std;

int main() {

	cout << "Merhaba" << endl; // << output

	int en, boy, alan;



	/*
	cout << "Lütfen dikdörtgenin enini giriniz : ";		// >> input
	cin >> en;
	cout << "Lütfen dikdörtgenin boyunu giriniz : ";
	cin >> boy;
	*/

	cin >> en >> boy;

	alan = en * boy;
	cout << "Dikdörtgenin Alaný : " << alan << "m2'dir" << endl;
	

	return 0;
}