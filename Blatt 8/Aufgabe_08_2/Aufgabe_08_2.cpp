/*** Aufgabe_08_2.cpp ***/
#include "Aufgabe_08_2.h"
using namespace std;

int main() {
  unsigned int const n = 7;
  int data[] = {3, 1, 2, -4, 1, -5, 9};

  Schlange<int> queue1;

  for (unsigned int i = 0; i < n; ++i) {
    queue1.enq(data[i]);
  }

  queue1.print();

  // Testaufruf von insertAfter()
  // Einfuegen nach dem ersten Element
  queue1.insertAfter(queue1.frontObj(), 3);
  queue1.print();

  // Testaufruf von manifold()
  queue1.manifold();
  queue1.print();

  // Testaufruf nach der Bearbeitung
  queue1.enq(data[0]);
  queue1.print();

  return 0;
}
/* Ausgabe:
3, 1, 2, -4, 1, -5, 9
3, 1, 2, -4, 1, -5, 9
3, 1, 2, -4, 1, -5, 9
3, 1, 2, -4, 1, -5, 9, 3
*/
/*** Ende Aufgabe_08_2.cpp ***/
