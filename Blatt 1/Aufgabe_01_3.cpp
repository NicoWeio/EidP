/*** Aufgabe_01_3.cpp ***/
#include <iostream>
using namespace std;

int main() {
		double A[] = {8.128, 101.02, 84.89, 58.95, 5.6, 53.58, 45.3, 79.01, 23.53, 45.18};
		// double A[] = {5, 9, 3, 7};
		int n = 10; // Anzahl Elemente in A
		double altsum = 0;

		// *************************************

		for (int i = 0; i < n; i++) {
				// altsum += (A[i] / (i + 1)) * ((i % 2 == 0) ? 1 : -1);
				// altsum += (A[i] / (i + 1)) * (2 * ((i + 1) % 2) - 1);

				if (i % 2 == 0) {
						altsum += (A[i] / (i + 1));
				}
				else {
						altsum -= (A[i] / (i + 1));
				}
		}

		// *************************************

		cout << "Gew. alt. Summe: " << altsum << endl;
		return 0;
}
/* Ausgabe:
   Gew. alt. Summe: -41.9412
*/
/*** Ende Aufgabe_01_3.cpp ***/
