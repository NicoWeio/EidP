#ifndef AUFGABE_10_2_H
#define AUFGABE_10_2_H

#include <string>

using namespace std;

class Fahrzeug {
protected:
    string kennzeichen;
    int erstzulassung;
    int hubraum;
public:
    Fahrzeug(const char *pKennzeichen, int pErstzulassung, int pHubraum);

    virtual void print();
};

class PKW : public Fahrzeug {
private:
    int leistung;
    int schadstoffklasse;
public:
    PKW(const char *pKennzeichen, int pErstzulassung, int pHubraum, int pLeistung, int pSchadstoffklasse);

    void print() override;
};

class Motorrad : public Fahrzeug {
private:
    bool beiwagen;
public:
    Motorrad(const char *pKennzeichen, int pErstzulassung, int pHubraum, bool pBeiwagen);

    void print() override;
};

class LKW : public Fahrzeug {
private:
    int achsen;
    int zuladung;
public:
    LKW(const char *pKennzeichen, int pErstzulassung, int pHubraum, int pAchsen, int pZuladung);

    void print() override;
};

#endif //AUFGABE_10_2_H
