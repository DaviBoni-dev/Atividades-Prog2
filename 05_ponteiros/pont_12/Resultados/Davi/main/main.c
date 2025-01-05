#include <stdio.h>
#include "vetor.h"

int soma(int a, int b)
{
    return a + b;
}

int multiplica(int a, int b)
{
    return a * b;
}

int main()
{
    Operation op;
    Vetor *v;
    LeVetor(v);
    op = soma;
    printf("Soma: %d\n", AplicarOperacaoVetor(v, op));
    op = multiplica;
    printf("Produto: %d\n", AplicarOperacaoVetor(v, op));
}