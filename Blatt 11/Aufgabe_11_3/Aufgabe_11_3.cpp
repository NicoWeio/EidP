/*** Aufgabe_11_3.cpp ***/
/*
 * 1.
 * Mit `c - 'A'` wird jeder Großbuchstabe in einen Zahlenwert von 0 bis 25 konvertiert. Dieser wird dann mit `+ n`
 * um eine feste Größe n rotiert. Der Modulo-Operator `% 26` nach der inneren Klammer sorgt dafür, dass
 * die Rotation nur innerhalb der Großbuchstaben erfolgt und beispielsweise eine positive Rotation eines Y um 2 ein A
 * und nicht ein "\" ergibt.
 * Indem `'A'` wieder dazu addiert wird, kann mit dem Cast `(char)` der rotierte Buchstabe
 * auch als Buchstabe ausgegeben werden.
 *
 * Beispiel:
 * n = 65, c = 'M'
 *
 * c - 'A' = 12                            → numerische Darstellung des Buchstaben M
 * c - 'A' + n = 77                        → rotiert um n, aber liegt nicht mehr im Alphabet
 * (c - 'A' + n) % 26 = 25                 → rotiert um n, mittels Modulo beschränkt aufs Alphabet
 * 'A' + (('M' - 'A' + n) % 26) = 90 = 'Z' → ASCII-Wert, der dem Buchstaben Z entspricht
 *
 * 2.
 * Für Großbuchstaben muss 2n%26=0 gelten. Denn dann ergibt die zweifache Rotation eine oder mehrere ganze.
 *
 * 3.
 * 65*2=130 ist sowohl durch 26 als auch durch 10 teilbar.
 * Damit ist das in 2. gennante Kriterium für sowohl Buchstaben als auch Ziffern erfüllt.
*/
#include <iostream>
#include <cctype>

using namespace std;

char caesarChiffre(char const c, unsigned int const n) {
    if (isupper(c)) {
        return 'A' + (c - 'A' + n) % 26;
    } else if (islower(c)) {
        return 'a' + (c - 'a' + n) % 26;
    } else if (isdigit(c)) {
        return '0' + (c - '0' + n) % 10;
    }
    return c;
}

int main() {
    unsigned int const n = 65;
    char klarText[] = "CAESAR-VERSCHLUESSELUNG mit 39 ZEICHEN!";
    char verschlText[] = "IREFPUYHRFFRYGR GRKG zvg 81 MRVPURA!";

//    cout << "Verschluesselte Text: ";
    cout << "CAESAR-VERSCHLUESSELUNG mit 39 ZEICHEN!" << endl;
    // Text verschluesseln
    for (unsigned int i = 0; klarText[i] != '\0'; ++i) {
        cout << caesarChiffre(klarText[i], n);
    }
    cout << endl;

//    cout << endl << "Entschluesselte Text: ";
    cout << "IREFPUYHRFFRYGR GRKG zvg 81 MRVPURA!" << endl;
    // Text entschluesseln
    for (unsigned int i = 0; verschlText[i] != '\0'; ++i) {
        cout << caesarChiffre(verschlText[i], n);
    }


//    cout << "CAESAR-VERSCHLUESSELUNG mit 39 ZEICHEN!" << endl;
//    for (unsigned int i = 0; klarText[i] != '\0'; ++i) {
//        cout << caesarChiffre(klarText[i], n);
//    }
//    cout << endl;
//    for (unsigned int i = 0; klarText[i] != '\0'; ++i) {
//        cout << caesarChiffre(caesarChiffre(klarText[i], n), n);
//    }

    return 0;
}
/* Ausgabe:
Verschluesselte Text: PNRFNE-IREFPUYHRFFRYHAT mit 39 MRVPURA!
Entschluesselte Text: VERSCHLUESSELTE TEXT zvg 81 ZEICHEN!
*/
/*** Ende Aufgabe_11_3.cpp ***/
