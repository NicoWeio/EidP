#ifndef PUNKT_H
#define PUNKT_H

class Punkt {
private:
  unsigned int const n;
  double *koordinaten;

public:
  // Punkt() = delete;
  Punkt(unsigned int dimension);
  ~Punkt();

  float getKoordinate(unsigned int i);
  void setKoordinate(unsigned int i, double wert);

  void addiere(Punkt const &punkt2);

  void skalarMultiplikation(double faktor);

  double skalarProdukt(Punkt const &punkt2);
};

#endif
