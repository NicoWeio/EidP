#include "Aufgabe_07_2a.h"
#include <iostream>
using namespace std;

Punkt::Punkt(unsigned int inputN) : n(inputN) {
  koordinaten = new double[n];

  for (unsigned int i = 0; i < n; i++) { // mit 0 initialisieren
    koordinaten[i] = 0;
  }
}

Punkt::~Punkt() { delete[] koordinaten; }

float Punkt::getKoordinate(unsigned int i) {
  if (i >= n) {
    cerr << "Fehler: zu großer Index!" << endl;
    exit(1);
  }
  return koordinaten[i];
}

void Punkt::setKoordinate(unsigned int i, double wert) {
  if (i >= n) {
    cerr << "Fehler: zu großer Index!" << endl;
    exit(1);
  }
  koordinaten[i] = wert;
}

void Punkt::addiere(Punkt const &punkt2) {
  if (n != punkt2.n) {
    cerr << "Fehler: ungleiche Anzahl von Koordinaten!" << endl;
    exit(1);
  }

  for (unsigned int i = 0; i < n; i++) {
    koordinaten[i] += punkt2.koordinaten[i];
  }
}

void Punkt::skalarMultiplikation(double faktor) {
  for (unsigned int i = 0; i < n; i++) {
    koordinaten[i] *= faktor;
  }
}

double Punkt::skalarProdukt(Punkt const &punkt2) {
  if (n != punkt2.n) {
    cerr << "Fehler: ungleiche Anzahl von Koordinaten!" << endl;
    exit(1);
  }

  double sum = 0;
  for (unsigned int i = 0; i < n; i++) {
    sum += (koordinaten[i] * punkt2.koordinaten[i]);
  }
  return sum;
}
