#include <iostream>

using namespace std;

int main() {

	cout << "Merhaba" << endl; // << output

	int en, boy, alan;



	/*
	cout << "L�tfen dikd�rtgenin enini giriniz : ";		// >> input
	cin >> en;
	cout << "L�tfen dikd�rtgenin boyunu giriniz : ";
	cin >> boy;
	*/

	cin >> en >> boy;

	alan = en * boy;
	cout << "Dikd�rtgenin Alan� : " << alan << "m2'dir" << endl;
	

	return 0;
}