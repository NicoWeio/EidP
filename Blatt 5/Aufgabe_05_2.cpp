/*** Aufgabe_05_2.cpp ***/
#include <iostream>
using namespace std;

int *amul(int a[], int n, int s) {
  for (int i = 0; i < n; i++) {
    a[i] *= s;
  }
  return a;
}

int *aadd(int a[], int nA, int b[], int nB) {
  if (nA == nB) {
    for (int i = 0; i < nA; i++) {
      a[i] += b[i];
    }
  }
  return a;
}

int main() {
  unsigned int const n = 5;
  int a1[n] = {5, 2, 4, 7, 2};
  int a2[n] = {6, 3, 3, -1, 9};

  amul(aadd(aadd(a1, n, a2, n), n, a2, n), n, 2);

  cout << "Ergebnis: [ ";
  for (unsigned int i = 0; i < n - 1; ++i) {
    cout << a1[i] << ", ";
  }
  cout << a1[n - 1] << " ]" << endl;
  return 0;
}
/* Ausgabe:
Ergebnis: [ 34, 16, 20, 10, 40 ]
*/
/*** Ende Aufgabe_05_2.cpp ***/
