#include <iostream>

using namespace std;

int main() {

	// 1'den 20'ye kadar t�m �ift say�lar� ekrana yazd�ran bir for loop yazal�m.
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