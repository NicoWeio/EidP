/*** Aufgabe_09_2.cpp ***/
#include "Aufgabe_09_2.h"

using namespace std;

int main() {
    int array1[] = {6, 8, 2, 7, 9, 1, 3};
    unsigned int length = sizeof(array1) / sizeof(int);

    BinTree<int> baum1;

    for (unsigned int i = 0; i < length; ++i) {
        baum1.insert(array1[i]);
    }
    baum1.printToConsole();

    /* Test von preorder() */
    cout << "Knoten von Baum1 in Preorder-Reihenfolge: ";
    baum1.preorder();
    cout << endl;

    return 0;
}
/* Ausgabe:
                                 6
                 2                               8
         1               3               7               9
Knoten von Baum1 in Preorder-Reihenfolge: 6 2 1 3 8 7 9
*/
/*** Ende Aufgabe_09_2.cpp ***/
