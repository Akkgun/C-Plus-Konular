#include <iostream>

using namespace std;

int main() {

	// break:döngüyü sonlandýrýr.
	// continue: continue'nin altýnda kalan kýsým atlanýr ve tekrar döngünün baþýna dönülür.

	for (int i = 0; i < 20; i++)
	{
		if (i == 10)
		{
			continue;
		}
		cout << i << endl;
	 }


	cout << endl;
	return 0;
}