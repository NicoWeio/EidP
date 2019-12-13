#include "Aufgabe_07_2a.h"
#include <iostream>
using namespace std;

int main() {
  Punkt a = Punkt(3);
  a.setKoordinate(0, 2.5);
  a.setKoordinate(1, 3.8);
  a.setKoordinate(2, -2.2);

  Punkt b = Punkt(3);
  b.setKoordinate(0, 0.8);
  b.setKoordinate(1, -1.2);
  b.setKoordinate(2, 3.1);

  a.addiere(b);
  b.skalarMultiplikation(3);
  cout << a.skalarProdukt(b) << endl;
}

/* Ausgabe:
6.93
*/
