#include <iostream>
using namespace std;

int main () {
        int i = 777;
        while (i >= 0) {
                if (i % 2 == 0) {
                        cout << i << endl;
                }
                i -= 17;
        }
        return 0;
}

/* Ausgabe:
760
726
692
658
624
590
556
522
488
454
420
386
352
318
284
250
216
182
148
114
80
46
12
*/
