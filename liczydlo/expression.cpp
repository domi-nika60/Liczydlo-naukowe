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

void expression::binary(char oper)
{
    switch (oper) {
    case '+':
        operators.push_back(oper);
        break;
    default:
        break;
    }
    numbers.push_back(number.toDouble());
    number.clear();
}

double expression::result()
{
    numbers.push_back(number.toDouble());
    number.clear();
    //while (operators.size() > 0)
    {

    }
    return numbers[0] + numbers[1];
}
