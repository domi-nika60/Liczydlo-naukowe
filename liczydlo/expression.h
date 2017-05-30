#ifndef expression_H
#define expression_H

#include <QString>
#include <vector>

class expression
{ 
  QString number;                           //obecnie wczytwana liczba
  std::vector <double> numbers;             //liczby
  std::vector <char> operators;             //operatory
  double answer;                            //wynik poprzedniego
  QString exp;                              //cale wyrazenie
  std::vector <QString> log;
  const char def_operators[4];               //definuje mozliwe dzialania

public:
  expression();                             //konstruktor
  expression &operator+=(const QString c);  //dodawanie kolejnych, jak w klasie string
  QString display();                        //zwraca cale wyrazenie
  double result();                          //liczenie wartosci
  void binary(char oper);                   //operatory przyjmujace 2 arg
};

#endif
