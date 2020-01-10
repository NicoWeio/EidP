/*** Aufgabe_09_4.cpp ***/
#include "Aufgabe_09_4.h"

Fraction::Fraction() : numerator(1), denominator(1) {}

Fraction Fraction::operator+(Fraction const &f) {
    if (denominator == f.denominator) { //nur für ggf. bessere Effizienz
        // diese Syntax ist äquivalent zu "return Fraction(x, y)":
        return {numerator + f.numerator, denominator};
    } else {
        int const newNumerator = numerator * f.denominator + f.numerator * denominator;
        return {newNumerator, denominator * f.denominator};
    }
}

Fraction Fraction::operator-(Fraction const &f) {
    if (denominator == f.denominator) { //nur für ggf. bessere Effizienz
        return {numerator - f.numerator, denominator};
    } else {
        int const newNumerator = numerator * f.denominator - f.numerator * denominator;
        return {newNumerator, denominator * f.denominator};
    }
}

Fraction Fraction::operator*(Fraction const &f) {
    return {numerator * f.numerator, denominator * f.denominator};
}

Fraction Fraction::operator/(Fraction const &f) {
    return {numerator * f.denominator, denominator * f.numerator};
}

int Fraction::getNumerator() const {
    return numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}

void Fraction::print() {
    cout << this;
}

ostream &operator<<(ostream &os, Fraction const &f) {
    os << f.getNumerator() << "/" << f.getDenominator();
    return os;
}

void Fraction::normalize() {
    int foo = gcd(numerator, denominator);
    numerator /= foo;
    denominator /= foo;

    if (denominator < 0) {
        numerator *= -1;
        denominator *= -1;
    }
}

int Fraction::gcd(int const n, int const d) {
    //https://www.formelsammlung-mathe.de/grundrechenarten/groester-gemeinsamer-teiler.html#euklidischer-algorithmus
    if (n == d) {
        return n;
    } else {
        int a = (n > d) ? n : d;
        int b = (n > d) ? d : n;

        while (true) {
            int rest = a % b;
            if (rest == 0) return b;
            a = b;
            b = rest;
        }
    }

}

Fraction::Fraction(int const numerator, int const denominator) : numerator(numerator), denominator(denominator) {
    if (denominator == 0) {
        this->numerator = 1;
        this->denominator = 1;
    }
    normalize();
}

/*** Ende Aufgabe_09_4.cpp ***/
