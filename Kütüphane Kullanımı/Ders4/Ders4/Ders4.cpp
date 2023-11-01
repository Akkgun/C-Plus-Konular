#include <iostream>
#include <cmath> // Matematiksel Kütüphane (iostreamin içine gömülü ayriyetten yazmaya gerek yok)

using namespace std;
int main() {

	int y, z, x;
	int v;
	y = pow(2, 5); // 2 üzeri 5 
	z = floor(2.5); // 2 < 2.5 < 3	(en yakýn bir alt rakama çeker)
	x = ceil(2.5);	// 2 < 2.5 < 3 (en yakýn bir üst rakama çeker)
	v = round(2.4); // (en yakýn olanýna yuvarlar) 
	cout << y << endl;
	cout << z << endl;
	cout << x << endl;
	cout << v << endl;
		return 0;


}