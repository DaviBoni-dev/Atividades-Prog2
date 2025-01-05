#include <stdio.h>
#include "calculadora.h"

float soma(float a, float b)
{
    return a + b;
}

float subtrai(float a, float b)
{
    return a - b;
}

float multiplica(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

int main()
{
    char c;
    float num1, num2;

    CalculatoraCallback calcular;

    while (scanf("%c\n", &c) == 1)
    {
        scanf("%f %f\n", &num1, &num2);

        if (c == 'a')
        {
            calcular = soma;
            printf("%.2f + %.2f = %.2f\n", num1, num2, Calcular(num1, num2, calcular));
        }
        else if (c == 's')
        {
            calcular = subtrai;
            printf("%.2f - %.2f = %.2f\n", num1, num2, Calcular(num1, num2, calcular));
        }
        else if (c == 'm')
        {
            calcular = multiplica;
            printf("%.2f x %.2f = %.2f\n", num1, num2, Calcular(num1, num2, calcular));
        }
        else if (c == 'd')
        {
            calcular = divide;
            printf("%.2f / %.2f = %.2f\n", num1, num2, Calcular(num1, num2, calcular));
        }
        else
        {
            break;
        }
    }
}