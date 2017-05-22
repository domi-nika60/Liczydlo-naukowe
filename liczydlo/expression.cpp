#include "expression.h"

expression::expression()
: def_operators{'+', '-', '*', '/'}
{

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
