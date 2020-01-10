/*** Aufgabe_09_4_test.cpp ***/
#include "Aufgabe_09_4.h"

int main(int argc, char **argv) {
    Fraction f1(1, 0);
    Fraction f2(0, 0);
    Fraction f3(5, -10);
    Fraction f4(-5, 10);
    Fraction f5(-5, -10);
    Fraction f6(5, 9);
    Fraction f7(4, 6);

    cout << "*** Ausgabe der Brueche ***" << endl;
    cout << "Bruch  1/0  : " << f1 << endl;
    cout << "Bruch  0/0  : " << f2 << endl;
    cout << "Bruch  5/-10: " << f3 << endl;
    cout << "Bruch -5/10 : " << f4 << endl;
    cout << "Bruch -5/-10: " << f5 << endl;
    cout << "Bruch  5/9  : " << f6 << endl;
    cout << "Bruch  4/6  : " << f7 << endl;

    cout << endl << "*** Rechnen mit Bruechen ***" << endl;
    cout << "Addition:       5/9 + 4/6 = " << f6 + f7 << endl;
    cout << "Subtraktion:    5/9 - 4/6 = " << f6 - f7 << endl;
    cout << "Multiplikation: 5/9 * 4/6 = " << f6 * f7 << endl;
    cout << "Division:       5/9 / 4/6 = " << f6 / f7 << endl;

    return 0;
}
/* Ausgabe:
*/
/*** Ende Aufgabe_09_4_test.cpp ***/
