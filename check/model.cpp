#include "model.h"

model::model()
{

}

void model::setNum1(float num)
{
    num1 = num;
}
void model::setNum2(float num)
{
    num2 = num;
}

void model::setFlag(QString flag)
{
    this->flag = flag;
}

float model::doExpr()
{
    int result = 0;
    if(flag == "+")
        result = num1+num2;
    else if(flag == "-")
        result = num1-num2;
    else if (flag == "*")
        result = num1*num2;
    else if(flag == "/")
    {
        if(num2 == 0)
            return -666; //错误
        else
            result = num1 / num2;
    }

    return result;

}
