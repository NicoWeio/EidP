/*** Aufgabe_04_2a.cpp ***/
#include <iostream>
using namespace std;

int fib(int i) {
  return (i <= 2) ? 1 : (fib(i-1) + fib(i-2));
}

int main() {
	unsigned int const n = 25;
	// In Zeile 10 steht const, weil...
  // die Variable nicht geändert werden soll/darf.
  // Der Compiler (?) hindert uns daran, wenn wir das Schlüsselwort "const" verwenden.

	for (unsigned int i = 1; i <= n; ++i) {
    cout << "fib(" << i << ")=" << fib(i) << endl;
	}
	return 0;
}
/* Ausgabe:
fib(1)=1
fib(2)=1
fib(3)=2
fib(4)=3
fib(5)=5
fib(6)=8
fib(7)=13
fib(8)=21
fib(9)=34
fib(10)=55
fib(11)=89
fib(12)=144
fib(13)=233
fib(14)=377
fib(15)=610
fib(16)=987
fib(17)=1597
fib(18)=2584
fib(19)=4181
fib(20)=6765
fib(21)=10946
fib(22)=17711
fib(23)=28657
fib(24)=46368
fib(25)=75025
 */
/*** Ende Aufgabe_04_2a.cpp ***/
