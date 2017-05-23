#include "expression.h"

expression::expression()
: def_operators{'*', '/', '+', '-'}
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
    operators.push_back(oper);
    numbers.push_back(number.toDouble());
    number.clear();
}

double expression::result()
{
    numbers.push_back(number.toDouble());
    number.clear();
    char oper;
    /*
    while (!operators.empty() && numbers.size() >= 2)
    {
           oper = operators.back();
           operators.pop_back();
           switch (oper) {
           case '+':
               numbers[0] += numbers[1];
               numbers.erase(numbers.begin()+1);
               break;
           case '-':
               numbers[0] -= numbers[1];
               numbers.erase(numbers.begin()+1);
               break;
           default:
               break;
           }
    }
    */
    //while (!operators.empty() && numbers.size() >= 2)
    //{
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
    //}

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
    return answer;
}
