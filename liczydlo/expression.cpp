#include "expression.h"
#include <string>

expression::expression()
: def_operators{'*', '/', '+', '-'}
{
    answer = 0;
    exp.clear();

}

expression &expression::operator+=(const QString c)
{
    number = QString::number((number+c).toDouble(), 'g', 15);
    return *this;
}

QString expression::display()
{
    if (operators.empty())
        return number;
    else
        return exp+number;
}

void expression::binary(char oper)
{
    if (!number.isEmpty())
    {
        exp += number;
        exp += QString(oper);
        operators.push_back(oper);
        numbers.push_back(number.toDouble());
        number.clear();
    }
}

QString expression::result()
{
    numbers.push_back(number.toDouble());
    exp += number;
    number.clear();
    char oper;
    if (operators.size() >= numbers.size())
        operators.pop_back();

    for (unsigned int i = 0; i < operators.size() && !operators.empty(); ++i)
    {
        oper = operators[i];
        if (oper == '*')
        {
            numbers[i] *= numbers[i+1];
            numbers.erase(numbers.begin()+i+1);
            operators.erase(operators.begin()+i);
            i--;
        }
        else if (oper == '/')
        {
            if (numbers[i+1] == 0.0)
                exit(4);
            numbers[i] /= numbers[i+1];
            numbers.erase(numbers.begin()+i+1);
            operators.erase(operators.begin()+i);
            i--;
        }

    }

    for (unsigned int i = 0; i < operators.size() && !operators.empty(); ++i)
    {
        oper = operators[i];
        if (oper == '+')
        {
            numbers[i] += numbers[i+1];
            numbers.erase(numbers.begin()+i+1);
            operators.erase(operators.begin()+i);
            i--;
        }
        else if (oper == '-')
        {
            numbers[i] -= numbers[i+1];
            numbers.erase(numbers.begin()+i+1);
            operators.erase(operators.begin()+i);
            i--;
        }
    }



    answer = numbers [0];
    numbers.clear();
    log.push_back(exp + QString("=") + QString::number(answer, 'g', 15));
    exp.clear();
    return log.back();
}

void expression::clear_all()
{
    exp.clear();
    numbers.clear();
    operators.clear();
    number.clear();
}

void expression::clear()
{
    if (!number.isEmpty())
    {
        number.clear();
        numbers.pop_back();
    }
    else
    {
        //operators.pop_back();
    }
}

void expression::backspace()
{
    if(!number.isEmpty())
    {
        number.chop(1);
    }
}

void expression::decimal()
{
    if (!number.isEmpty())
        if (!number.contains(".", Qt::CaseInsensitive))
            number+=".";
}
