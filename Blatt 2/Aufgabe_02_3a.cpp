/*** Aufgabe_02_3a.cpp ***/
#include <iostream>
using namespace std;

int main () {
        int i = 777;
        if (i >= 0) {
                do {
                        if (i % 2 == 0) {
                                cout << i << endl;
                        }
                        i -= 17;
                }
                while (i >= 0);
        }
        return 0;
}

/* Ausgabe:
   760
   726
   692
   658
   624
   590
   556
   522
   488
   454
   420
   386
   352
   318
   284
   250
   216
   182
   148
   114
   80
   46
   12
 */
/*** Ende Aufgabe_02_3a.cpp ***/
