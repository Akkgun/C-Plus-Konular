#include <iostream>

using namespace std;
int main() {

	//Arrays-Diziler

	int arr[4];
	arr[0] = 15;
	arr[1] = 13;
	arr[2] = 12;
	arr[3] = 11;

	// int arr[] = {25,234,542,23,44} 2.yol dizi

	cout << "Arrayin ilk değerini giriniz: ";
	cin >> arr[0];

	for (int i = 0; i <= 3; i++) {
		cout << arr[i] << endl;
	}

	cout << endl;
	return 0;

}