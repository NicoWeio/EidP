/*** Aufgabe_04_2b.cpp ***/
#include <iostream>
using namespace std;

void verdopple(int &num) {
	num *= 2;
}

int main() {
	unsigned int const n = 8;
	int zahl[n] = { 5, 44, -13, 78, -14, 66, 78, 9 };
	cout << "Zahlen vor der Verdopplung " << endl;
	for (unsigned int i = 0; i < n; ++i) {
		cout << (i + 1) << ". Zahl: " << zahl[i] << endl;
	}

	for (unsigned int i = 0; i < n; ++i) {
		verdopple(zahl[i]);
	}

	cout << "Zahlen nach Verdopplung " << endl;
	for (unsigned int i = 0; i < n; ++i) {
		cout << (i + 1) << ". Zahl: " << zahl[i] << endl;
	}
	return 0;
}

/* Ausgabe:
 Zahlen vor der Verdopplung
 1. Zahl: 5
 2. Zahl: 44
 3. Zahl: -13
 4. Zahl: 78
 5. Zahl: -14
 6. Zahl: 66
 7. Zahl: 78
 8. Zahl: 9
 Zahlen nach Verdopplung
 1. Zahl: 10
 2. Zahl: 88
 3. Zahl: -26
 4. Zahl: 156
 5. Zahl: -28
 6. Zahl: 132
 7. Zahl: 156
 8. Zahl: 18
 */
/*** Ende Aufgabe_04_2b . cpp ***/
