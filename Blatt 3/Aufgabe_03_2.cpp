/*** Aufgabe_03_2.cpp ***/
#include <iostream>
using namespace std;

int main() {
  unsigned int tag, monat, jahr;
  cout << "Geben Sie Tag, Monat und Jahr ein " << endl;
  cin >> tag;
  cin >> monat;
  cin >> jahr;
  // cout << "Eingabe: " << tag << "." << monat << "." << jahr << endl;
  // *************************************

  bool isSchaltjahr = ((jahr % 400 == 0) || ((jahr % 4 == 0) && (jahr % 100 != 0)));
  bool isMonthValid = (monat > 0 && monat <= 12);
  bool isYearInBounds = (jahr > 1600 && jahr < 2600);
  int daysInMonth;

  switch (monat) {
  case 1: //Januar
  case 3: //März
  case 5: //Mai
  case 7: //Juli
  case 8: //August
  case 10: //Oktober
  case 12: //Dezember
    {
      //31 Tage
      daysInMonth = 31;
      break;
    }
  case 4: //April
  case 6: //Juni
  case 9: //September
  case 11: //November
    {
      //30 Tage
      daysInMonth = 30;
      break;
    }
  case 2: //Februar
    {
      //SONDERFALL: 28 oder 29 Tage
      daysInMonth = isSchaltjahr ? 29 : 28;
    }
  }

  bool isDayValid = (tag > 0 && tag <= daysInMonth);

  if (!isDayValid || !isMonthValid || !isYearInBounds) {
    cout << "Naechster Tag ist 99.99.9999" << endl;
    return 1;
  }

  //******************

  tag++;

  if (tag > daysInMonth) {
    tag = 1;
    monat++;
  }

  if (monat > 12) {
    monat = 1;
    jahr++;
    cout << "Monat > 12" << endl;
  }

  // *************************************
  cout << "Naechster Tag ist " <<
    tag << "." << monat << "." << jahr << endl;
  return 0;
}

/* Ausgabe:
0.11.2016:
Naechster Tag ist 99.99.9999

11.11.1111:
Naechster Tag ist 99.99.9999

30.11.2016:
Naechster Tag ist 1.12.2016

28.02.2016:
Naechster Tag ist 29.2.2016

28.02.2017:
Naechster Tag ist 1.3.2017
 */
/*** Ende Aufgabe_03_2.cpp ***/
