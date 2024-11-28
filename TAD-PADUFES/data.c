#include <stdio.h>
#include "data.h"

Data lerData()
{
    Data d;
    scanf("%d/%d/%d", &d.dia, &d.mes, &d.ano);
    return d;
}

void imprimeData(Data d)
{
    printf("DATA: %d/%d/%d", d.dia, d.mes, d.ano);
}
