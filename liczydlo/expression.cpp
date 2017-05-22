#include "expression.h"

expression::expression()
: operators{'+', '-', '*', '/'}
{
  current_value = 0;
}

expression &expression::operator+=(const QString c)
{
    exp += c;
    return *this;
}

QString expression::display()
{
    return exp;
}
