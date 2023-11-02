#include <iostream>

using namespace std;

int main() {

	// 1'den 20'ye kadar tüm çift sayýlarý ekrana yazdýran bir for loop yazalým.
	for (int i=1;i<=20;i++)
	{
		if(i % 2 == 0)
		{ 
		cout << i << endl;
		}
	}

	cout << endl;
	return 0;
}