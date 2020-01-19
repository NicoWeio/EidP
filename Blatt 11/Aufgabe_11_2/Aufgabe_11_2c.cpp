/*** Aufgabe_11_2c.cpp ***/
#include <iostream>

using namespace std;

//TODO einmal const double, einmal int const -arrays…?

class SizeNegativeExcept {
};

class SizeZeroExcept {
};

template<typename T>
T PosProd(int size, const T array[]) {
    if (size < 0) {
        throw SizeNegativeExcept();
    } else if (size == 0) {
        throw SizeZeroExcept();
    }

    T posProd = 1;
    for (unsigned int i = 0; i < size; ++i) {
        if (array[i] > 0) posProd *= array[i];
    }
    return posProd;
}

int main() {
    int const iA[] = {1, -1, 7, -6, -3, 0};
    double const dA[] = {1.3, -3.2, 0.1, -2.7, 0.4};
    try {
        cout << PosProd(6, iA) << ' ' << PosProd(5, dA) << endl;
    }
    catch (SizeNegativeExcept) {
        cerr << "Fehler: Größe < 0" << endl;
    }
    catch (SizeZeroExcept) {
        cerr << "Fehler: Größe == 0" << endl;
    }
    return 0;
}

/* Ausgabe:
7 0.052
*/
