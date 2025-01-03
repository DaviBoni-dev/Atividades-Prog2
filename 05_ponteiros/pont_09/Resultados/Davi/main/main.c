#include <stdio.h>
#include "pessoa.h"

int main()
{
    int qtd;
    scanf("%d\n", &qtd);
    tPessoa pessoas[100];
    for (int i = 0; i < qtd; i++)
    {
        tPessoa p = CriaPessoa();
        LePessoa(&p);
        pessoas[i] = p;
    }

    AssociaFamiliasGruposPessoas(&pessoas);

    for (int i = 0; i < qtd; i++)
    {
        ImprimePessoa(&pessoas[i]);
    }
}