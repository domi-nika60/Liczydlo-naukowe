#include "expression.h"

expression::expression()
: def_operators{'+', '-', '*', '/'}
{
    numbers.push_back(0);
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
