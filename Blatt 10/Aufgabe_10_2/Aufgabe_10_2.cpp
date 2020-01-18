#include <iostream>
#include "Aufgabe_10_2.h"

using namespace std;

Fahrzeug::Fahrzeug(const char *pKennzeichen, int pErstzulassung, int pHubraum)
        : kennzeichen(pKennzeichen),
          erstzulassung(pErstzulassung),
          hubraum(pHubraum) {}

void Fahrzeug::print() {
    cout << "Kennzeichen: " << kennzeichen << endl
         << "Erstzulassung: " << erstzulassung << endl
         << "Hubraum: " << hubraum << endl;
}

PKW::PKW(const char *pKennzeichen, int pErstzulassung, int pHubraum, int pLeistung, int pSchadstoffklasse)
        : Fahrzeug(pKennzeichen, pErstzulassung, pHubraum),
          leistung(pLeistung),
          schadstoffklasse(pSchadstoffklasse) {}

void PKW::print() {
    cout << "***PKW***" << endl;
    Fahrzeug::print();
    cout << "Leistung: " << leistung << endl
         << "Schadstoffklasse: " << schadstoffklasse << endl
         << endl;
}

Motorrad::Motorrad(const char *pKennzeichen, int pErstzulassung, int pHubraum, bool pBeiwagen)
        : Fahrzeug(pKennzeichen, pErstzulassung, pHubraum),
          beiwagen(pBeiwagen) {}

void Motorrad::print() {
    cout << "***Motorrad***" << endl;
    Fahrzeug::print();
    cout << "Beiwagen: " << (beiwagen ? "Ja" : "Nein") << endl
         << endl;
}


LKW::LKW(const char *pKennzeichen, int pErstzulassung, int pHubraum, int pAchsen, int pZuladung)
        : Fahrzeug(pKennzeichen, pErstzulassung, pHubraum),
          achsen(pAchsen),
          zuladung(pZuladung) {}

void LKW::print() {
    cout << "***LKW***" << endl;
    Fahrzeug::print();
    cout << "Achsen: " << achsen << endl
         << "Zuladung: " << zuladung << endl
         << endl;
}
