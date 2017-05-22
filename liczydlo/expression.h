#ifndef expression_H
#define expression_H

#include <QString>

#include <vector>

class expression
{
  double current_value; //moze obliczac na biezaco?
  QString exp;

  std::vector <QString> log; //historia, kiedys mozna ;)
  const char operators[];
public:
  expression();
  expression &operator+=(const QString c); //dodawanie cos jak w klasie string
  QString display(); //zwraca cale wyrazenie
  double result(); //wywolane wcisnieciem =
};

#endif
