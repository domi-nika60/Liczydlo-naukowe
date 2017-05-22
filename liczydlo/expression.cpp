#include "expression.h"

expression::expression()
: def_operators{'+', '-', '*', '/'}
{

}

expression &expression::operator+=(const QString c)
{
    number = QString::number(c.toDouble(), 'g', 15);
    return *this;
}

QString expression::display()
{
    return number;
}
