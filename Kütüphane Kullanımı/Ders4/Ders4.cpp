#include <iostream>
#include <cmath> // Matematiksel K�t�phane (iostreamin i�ine g�m�l� ayriyetten yazmaya gerek yok)

using namespace std;
int main() {

	int y, z, x;
	int v;
	y = pow(2, 5); // 2 �zeri 5 
	z = floor(2.5); // 2 < 2.5 < 3	(en yak�n bir alt rakama �eker)
	x = ceil(2.5);	// 2 < 2.5 < 3 (en yak�n bir �st rakama �eker)
	v = round(2.4); // (en yak�n olan�na yuvarlar) 
	cout << y << endl;
	cout << z << endl;
	cout << x << endl;
	cout << v << endl;
		return 0;


}