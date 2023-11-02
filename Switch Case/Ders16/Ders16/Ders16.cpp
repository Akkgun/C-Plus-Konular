#include <iostream>

using namespace std;
int main() {

	int sayi;
	cout << "Lutfen 1 ile 5 arasinda bir sayi giriniz: ";
	cin >> sayi;

	switch (sayi)
	{
	case 1:
		cout << "Seciminiz: 1" << endl;
		break;
	case 2:
		cout << "Seciminiz: 2" << endl;
		break;
	case 3:
		cout << "Seciminiz: 3" << endl;
		break;
	case 4:
		cout << "Seciminiz: 4" << endl;
		break;
	case 5:
		cout << "Seciminiz: 5" << endl;
		break;

	default:
		cout << "1 ile 5 arasinda bir sayi girmediniz!" << endl;
		break;
	}

	cout << endl;
	return 0;
}