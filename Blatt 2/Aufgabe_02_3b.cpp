/*** Aufgabe_02_3b.cpp ***/
#include <iostream>
using namespace std;

int main () {
        for (int i = 777; i >= 0; i -= 17) {
                if (i % 2 == 0) {
                        cout << i << endl;
                }
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
/*** Ende Aufgabe_02_3b.cpp ***/
