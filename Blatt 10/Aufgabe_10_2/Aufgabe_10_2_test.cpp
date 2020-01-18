#include "Aufgabe_10_2.h"

int main() {
    PKW vw("MK - JK 1111", 2006, 1980, 130, 2);
    Fahrzeug *seat = new PKW("K - KJ 1284", 2014, 1990, 150, 5);
    vw.print();
    seat->print();

    Motorrad motorrad1("FO - JK 1234", 2007, 1970, true);
    Fahrzeug *motorrad2 = new Motorrad("P - PI 3141", 2015, 2000, false);
    motorrad1.print();
    motorrad2->print();

    LKW lkw1("EU - ZA 2718", 2008, 1960, 4, 2);
    Fahrzeug *lkw2 = new LKW("W - AZ 1414", 2016, 2010, 6, 15);
    lkw1.print();
    lkw2->print();
}

/* Ausgabe:
***PKW***
Kennzeichen: MK - JK 1111
Erstzulassung: 2006
Hubraum: 1980
Leistung: 130
Schadstoffklasse: 2

***PKW***
Kennzeichen: K - KJ 1284
Erstzulassung: 2014
Hubraum: 1990
Leistung: 150
Schadstoffklasse: 5

***Motorrad***
Kennzeichen: FO - JK 1234
Erstzulassung: 2007
Hubraum: 1970
Beiwagen: Ja

***Motorrad***
Kennzeichen: P - PI 3141
Erstzulassung: 2015
Hubraum: 2000
Beiwagen: Nein

***LKW***
Kennzeichen: EU - ZA 2718
Erstzulassung: 2008
Hubraum: 1960
Achsen: 4
Zuladung: 2

***LKW***
Kennzeichen: W - AZ 1414
Erstzulassung: 2016
Hubraum: 2010
Achsen: 6
Zuladung: 15
*/
