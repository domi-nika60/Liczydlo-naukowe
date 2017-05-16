#ifndef WECTOR
#define WECTOR

#include <iostream>

class wektor
{
  int  *fields;
  int size;
public:
  //constructors
  wektor();
  wektor(int nsize);
  wektor(const wektor &v);
  //destructor
  ~wektor();
  //overloadnig operators
  wektor operator+(const wektor &v);
  wektor operator-(const wektor &v);
  wektor operator*(const int n);
  wektor operator*(const wektor &v);

  wektor &operator=(const wektor &v);
  wektor &operator+=(const wektor &v);
  wektor &operator-=(const wektor &v);
  wektor &operator*=(const int &n);
  wektor &operator*=(const wektor &v); //do zrobienia

  friend std::istream& operator>>(std::istream &in, wektor &v);
  friend std::ostream& operator<<(std::ostream &out, wektor &v);

  int operator[](const int &index);

  bool operator==(const wektor &v);
  bool operator!=(const wektor &v);

};

#endif
