#include <iostream>

using namespace std;

int ucaginyonbilgilerinihesaplafonksiyon(int x_) {
	// yogun hesaplamalar en az 2000 satir
	x_ = 35;
	return x_;
}
void ucaginyonbilgilerinihesaplafonksiyon2(int* p)
{
	// yogun hesaplamalar *p kullanarak yap
	*p = 35;
}
int main() {
	
	int x = 7;
	int *ptr; // pointerlarýn amacý adres üzerinden deðiþkenlere eriþmek için kullanýlýr.
	ptr = &x; // &=Adress of ... 

	cout << x << endl;
	cout << *ptr << endl;
	cout << ptr << endl;
	cout << &x;
	cout << endl; 

	//x = ucaginyonbilgilerinihesaplafonksiyon(x);
	ucaginyonbilgilerinihesaplafonksiyon2(ptr);
	cout << "x'in yeni degeri: " << x << endl;
	
	*ptr = 10;
	//cout << "x'in yeni degeri: " << x << endl;
		return 0;
}