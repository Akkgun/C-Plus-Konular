#include <iostream>
using namespace std;

int main() {

	/*
	int* p = new int;
	*p = 7;
	cout << p << endl;

	cout << *p << endl;
	delete p;
	cout << p << endl;
	*/

	int x;
	cout << "Arrayin Kac Tam Sayi Icerecegini Giriniz: " << endl;
	cin >> x;
	int* p = new int[x];
	for (int i = 0; i < x; i++)
	{
		cin >> p[i];

	}
	int sum = 0;
	for (int i = 0; i < x; i++)
	{
		sum = sum + p[i];
	}
	cout << "Toplam: " << sum << endl;

	delete[]p;


	cout << endl;
	return 0;

}