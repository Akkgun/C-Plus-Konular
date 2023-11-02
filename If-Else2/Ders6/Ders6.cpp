#include <iostream>

using namespace std;
int main() {
	
	int sayi1, sayi2;
	int islem, sonuc;

	cout << "Lutfen 1.sayiyi giriniz : ";
	cin >> sayi1;
	cout << "Lutfen 2.sayiyi giriniz : ";
	cin >> sayi2;

	cout << "Lutfen isleminizi seciniz (1:+ 2:- 3:* 4:/) ";
	cin >> islem;

		cout << endl;
		if (islem == 1)
		{
			sonuc = sayi1 + sayi2;
		}
		else if (islem == 2 )
		{
			sonuc = sayi1 - sayi2;
		}
		else if (islem == 3 )
		{
			sonuc = sayi1 * sayi2;
		}
		else if (islem == 4 )
		{
			sonuc = sayi1 / sayi2;
		}
		else {
			cout << "Hatali Islem" << endl;
			return 0;
		}
		
		cout << "Sonucunuz: " << sonuc << endl;

		return 0;
}