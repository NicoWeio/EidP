/*** Aufgabe_11_2b.cpp ***/
#include <iostream>

using namespace std;

template<typename T> // T als "Platzhalter" in der folgenden Funktion festlegen
T PosProd(unsigned int size, const T array[]) { // Rückgabetyp T; ein Array mit Elementen vom Typ T entgegennehmen
    T posProd = 1; // Variable vom Typ T initialisieren mit Startwert 1 (neutrales Element)
    for (unsigned int i = 0; i < size; ++i) {
        if (array[i] > 0) posProd *= array[i];
    }
    return posProd;
}

int main() {
    int const iA[] = {1, -1, 7, -6, -3, 0};
    double const dA[] = {1.3, -3.2, 0.1, -2.7, 0.4};
    cout << PosProd(6, iA) << ' ' << PosProd(5, dA) << endl;
    return 0;
}

/* Ausgabe:
7 0.052
*/
