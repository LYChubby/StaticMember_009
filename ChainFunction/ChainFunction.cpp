#include <iostream>
using namespace std;

class buku {
	string judul;
public:
	buku setJudul(string judul) {
		this->judul = judul;
		return *this;				// Chain Function
	}
	string getJudul() {
		return this->judul;
	}
} bukunya;

int main() {
	// bukunya.setJudul("Mtematika");
	// cout << bukunya.getJudul();
	cout << bukunya.setJudul("Matematika").getJudul();   // Chain Function Calss
	return 0;
}