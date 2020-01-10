/*** Aufgabe_09_3.cpp ***/
#include "Aufgabe_09_3.h"

using namespace std;

int main() {
    int array1[] = {6, 8, 2, 7, 9, 1, 3};
    unsigned int length = sizeof(array1) / sizeof(int);

    BinTree<int> baum1;

    for (unsigned int i = 0; i < length; ++i) {
        baum1.insert(array1[i]);
    }
    baum1.printToConsole();

    cout << endl << "--------------" << endl << endl;

    // *** Hier baum2 als Kopie von baum1 mit Hilfe des Kopierkonstruktors erzeugen. ***
    cout << "Kopierkonstruktor: baum2(baum1)" << endl;
    BinTree<int> baum2(baum1);
    baum2.printToConsole();
    cout << endl << "----------------------------" << endl << endl;


    // *** Hier baum3 als Kopie von baum1 mit Hilfe des Zuweisungsoperators erzeugen. ***
    cout << "Zuweisungsoperator: baum3 = baum1" << endl;
    BinTree<int> baum3;
    baum3.insert(4);
    baum3.insert(5);
    baum3.insert(2);

    baum3 = baum1;
    baum3.printToConsole();
    cout << endl << "----------------------------" << endl << endl;

    return 0;
}
/* Ausgabe:
                                 6
                 2                               8
         1               3               7               9

--------------

Kopierkonstruktor: baum2(baum1)

Process returned -1073741819 (0xC0000005)   execution time : 1.780 s
*/
/*** Ende Aufgabe_09_3.cpp ***/
