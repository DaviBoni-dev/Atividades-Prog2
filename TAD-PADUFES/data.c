#include <stdio.h>
#include "data.h"

Data lerData()
{
    Data d;
    scanf("%d/%d/%d", &d.dia, &d.mes, &d.ano);
    return d;
}

Data setData()
{
    Data d;
    d.dia = 12;
    d.mes = 9;
    d.ano = 2023;
    return d;
}

void imprimeData(Data d)
{
    printf("DATA: %d/%d/%d", d.dia, d.mes, d.ano);
}

int diferencaAnosData(Data di, Data df)
{
    int diffAno = df.ano - di.ano;

    // Ajusta se ainda não completou o ano no calendário
    // Ajuste para considerar se o aniversário já ocorreu este ano
    if (df.mes < di.mes || (df.mes == di.mes && df.dia < di.dia))
    {
        diffAno--;
    }

    return diffAno;
}