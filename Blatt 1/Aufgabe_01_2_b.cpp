#include <iostream>
using namespace std;

int main() {
  int i = 31;
  signed int n = 1;
  unsigned int k = 1;

  while (i >= 1) {
    i--;
    n*=2;
    k*=2;
  }

  cout << "signed int n: " << n << endl
  << "unsigned int k: " << k << endl;
  return 0;
}
