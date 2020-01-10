/*** Aufgabe_09_4.h ***/
#include <iostream>

using namespace std;

class Fraction {
public:
    /*Konstruktoren*/
    Fraction();

    Fraction(int const numerator, int const denominator);

    /*Ueberladene Operatoren*/
    Fraction operator+(Fraction const &f);

    Fraction operator-(Fraction const &f);

    Fraction operator*(Fraction const &f);

    Fraction operator/(Fraction const &f);

    /* Getter */
    int getNumerator() const;

    int getDenominator() const;

    /*Ausgabe*/
    void print();

private:
    /*Private Methoden*/
    void normalize();

    int gcd(int const n, int const d);

    /*Private Variablen*/
    int numerator;
    int denominator;
};
/*** Ende Aufgabe_09_4.h ***/
