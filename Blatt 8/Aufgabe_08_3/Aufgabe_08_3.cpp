/*** Aufgabe_08_3.cpp ***/
#include "Aufgabe_08_3.h"

using namespace std;

int main() {
    int array1[] = {8, 3, 2, 0, 5, 10, 9};
    unsigned int length = sizeof(array1) / sizeof(int);

    BinTree<int> baum1;

    for (unsigned int i = 0; i < length; ++i) {
        baum1.insert(array1[i]);
    }
    baum1.printToConsole();

    /* Test von predValue() */
    for (unsigned int i = 0; i < length; ++i) {
        cout << "Vorgaenger von " << i * 2 << " = ";
        baum1.predValue(i * 2);
        cout << endl;
    }

    /* Test von countNodes() */
    cout << "Anzahl der Knoten von Baum 1: " << baum1.countNodes() << endl;

    return 0;
}
/* Ausgabe:
                                 8
                 3                              10
         2               5               9
     0
Vorgaenger von 0 = n/a
Vorgaenger von 2 = 0
Vorgaenger von 4 = n/a
Vorgaenger von 6 = n/a
Vorgaenger von 8 = 5
Vorgaenger von 10 = 9
Vorgaenger von 12 = n/a
Anzahl der Knoten von Baum 1: 7
*/
/*** Ende Aufgabe_08_3.cpp ***/
