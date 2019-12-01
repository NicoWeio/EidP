/*** Aufgabe_06_2c.cpp ***/
#include <iostream>
using namespace std;

#include "Aufgabe_06_2a.h"
#include "Aufgabe_06_2b.h"

void printArray(int const array[], unsigned int const size);

int main() {
  unsigned int const n = 7;
  int folge_a[n] = {7, 5, 66, 23, 8, 40, 46};
  int folge_b[n] = {95, 90, 80, 50, 20, 40, 40};
  int folge_c[n] = {-10, 13, -8, -5, 0, 8, 23};

  /* Sortiere die Folgen */
  bubblesort(folge_a, 0, n);
  bubblesort(folge_b, 0, n);
  bubblesort(folge_c, 0, n);

  /* Zeige die Arrays zur Pruefung der korrekten Sortierung */
  printArray(folge_a, n);
  printArray(folge_b, n);
  printArray(folge_c, n);

  /* Suche im ersten Array folge_a die Werte 66, 8, 6 und 70 */
  cout << "66 auf Position: " << finde(66, folge_a, n) << endl;
  cout << "8 auf Position: " << finde(8, folge_a, n) << endl;
  cout << "6 auf Position: " << finde(6, folge_a, n) << endl;
  cout << "70 auf Position: " << finde(70, folge_a, n) << endl;

  /* Suche im zweiten Array folge_b die Werte -2, 40, 20, 95 */
  cout << "-2 auf Position: " << finde(-2, folge_b, n) << endl;
  cout << "40 auf Position: " << finde(40, folge_b, n) << endl;
  cout << "20 auf Position: " << finde(20, folge_b, n) << endl;
  cout << "95 auf Position: " << finde(95, folge_b, n) << endl;

  /* Suche im dritten Array folge_c die Werte -8, -14, 8 ,0 */
  cout << "-8 auf Position: " << finde(-8, folge_c, n) << endl;
  cout << "-14 auf Position: " << finde(-14, folge_c, n) << endl;
  cout << "8 auf Position: " << finde(8, folge_c, n) << endl;
  cout << "0 auf Position: " << finde(0, folge_c, n) << endl;
}

void printArray(int const array[], unsigned int const size) {
  for (unsigned int i = 0; i < size; ++i)
    cout << array[i] << " ";
  cout << endl;
}

/* Ausgabe:
5 7 8 23 40 46 66
20 40 40 50 80 90 95
-10 -8 -5 0 8 13 23
66 auf Position: 6
8 auf Position: 2
6 auf Position: -1
70 auf Position: -1
-2 auf Position: -1
40 auf Position: 1
20 auf Position: 0
95 auf Position: 6
-8 auf Position: 1
-14 auf Position: -1
8 auf Position: 4
0 auf Position: 3
 */
/*** Ende Aufgabe_06_2c.cpp ***/
