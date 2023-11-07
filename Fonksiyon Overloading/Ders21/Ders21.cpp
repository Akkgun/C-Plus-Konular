#include <iostream>
using namespace std;


void ekranahatamesajiver() {
	cout << "Dikkat Hata Olustu!" << endl;

}

void ekranahatamesajiver(string mesaj) {
	cout << mesaj << endl;

}

void ekranahatamesajiver(int hatakodu)
{
	cout << "Hata Kodu: " << hatakodu;
}

int main() {

	ekranahatamesajiver();
	ekranahatamesajiver("Ozel Mesaj");
	ekranahatamesajiver("Ozel");

	cout << endl;
	return 0;
}