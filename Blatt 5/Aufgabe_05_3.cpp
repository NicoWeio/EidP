/*** Aufgabe_05_3.cpp ***/
#include <iostream>
using namespace std;

template <typename T> void rotate(T a[], int size) {
  for (int i = 0; i < (size - 1); i++) {
    swap(a[i], a[i + 1]);
  }
}

template <typename U, typename V> void pprint(const U v1, const V v2) {
  cout << "[" << v1 << " : " << v2 << "]" << endl;
}

int main() {

  unsigned int const n = 5;
  int a1[] = {0, 1, 2, 3, 4};
  char a2[] = {'a', 'V', 'R', 'd', 'r'};

  rotate(a1, n);
  cout << "Ergebnis: [ ";
  for (unsigned int i = 0; i < n - 1; ++i) {
    cout << a1[i] << ", ";
  }
  cout << a1[n - 1] << " ]" << endl;

  rotate(a2, n);

  cout << "Ergebnis: [ ";
  for (unsigned int i = 0; i < n - 1; ++i) {
    cout << a2[i] << ", ";
  }
  cout << a2[n - 1] << " ]" << endl;

  pprint(1.0, "Hello");
  pprint('x', 42);

  return 0;
}
/* Ausgabe:
Ergebnis: [ 1, 2, 3, 4, 0 ]
Ergebnis: [ V, R, d, r, a ]
[1 : Hello]
[x : 42]
*/
/*** Ende Aufgabe_05_3.cpp ***/
