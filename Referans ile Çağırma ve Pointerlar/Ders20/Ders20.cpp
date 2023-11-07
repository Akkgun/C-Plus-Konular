#include <iostream>
using namespace std;

void fonks1(int x) {
	x = x * 2;
	cout << "Fonks1 icindeki x :"<< x << endl; 
}

int main() {

	int arr[] = { 34,54,67 };
	int* p;
	p = arr;
	cout << p << endl;
	cout << arr << endl;
	cout << *(p+2) << endl;

	int x = 5;
	fonks1(x);
	cout << "Main icindeki x: " << x << endl;


	cout << endl;
	return 0;
}