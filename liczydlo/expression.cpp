#include "expression.h"

expression::expression()
: def_operators{'+', '-', '*', '/'}
{
    answer = 0;
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
        operators.insert(operators.begin(), oper);
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
    char oper;
    while (!operators.empty() && numbers.size() >= 2)
    {
           oper = operators.back();
           operators.pop_back();
           switch (oper) {
           case '+':
               numbers[0] += numbers[1];
               numbers.erase(numbers.begin()+1);
               break;
           default:
               break;
           }
    }
    answer = numbers [0];
    return answer;
}
