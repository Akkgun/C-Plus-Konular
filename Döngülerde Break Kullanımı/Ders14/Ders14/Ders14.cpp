#include <iostream>

using namespace std;

int main() {

	// break:d�ng�y� sonland�r�r.
	// continue: continue'nin alt�nda kalan k�s�m atlan�r ve tekrar d�ng�n�n ba��na d�n�l�r.

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