#include <iostream>
using namespace std;
int main() {
	int filas, numBlancos=0;
	cout << "Introduzca las filas: ";
	cin >> filas;
	for (int i = filas; i > 0; i--) {

		// Asteriscos
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		// Blancos
		for (int j = 1; j <= numBlancos; j++) {
			cout << " ";
		}
		// Asteriscos
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
		numBlancos += 2;
	}
	return 0;
}
