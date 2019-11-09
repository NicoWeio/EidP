/*** Aufgabe_04_2c.cpp ***/
#include <iostream>
using namespace std;

int produkt_summe_und_differenz(int const zahl1, int const zahl2, int &summe, int *differenz) {
  summe = zahl1 + zahl2;
  *differenz = zahl1 - zahl2; //?
  return zahl1 * zahl2;
}

int main() {
  int const zahl1 = 148, zahl2 = -62;
  int produkt, summe, differenz ;

  produkt = produkt_summe_und_differenz(zahl1, zahl2, summe, &differenz);

  cout << "Produkt: " << produkt << endl ;
  cout << "Summe: " << summe << endl ;
  cout << "Differenz: " << differenz << endl ;
  return 0;
 }

 /* Ausgabe:
 Produkt: -9176
 Summe: 86
 Differenz: 210
 */
 /*** Ende Aufgabe_04_2c.cpp ***/
