/*** Aufgabe_02_2.cpp ***/
#include <iostream>
using namespace std;

int main () {
        unsigned int const n = 1000;
        float l = 0;

        for (int i = 1; i <= n; i++) {
                l += (float)(i % 2 == 0 ? -1 : 1) / (float)(2*i - 1);
        }

        cout << l << endl;

        return 0;
}
/* Ausgabe:
0.785148
*/
/*** Ende Aufgabe_02_2.cpp ***/
