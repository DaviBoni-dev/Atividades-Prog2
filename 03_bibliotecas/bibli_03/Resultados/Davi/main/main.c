#include <stdio.h>
#include "data.h"

int main()
{
    int dia1, mes1, ano1, dia2, mes2, ano2;
    scanf("%d/%d/%d\n", &dia1, &mes1, &ano1);
    scanf("%d/%d/%d\n", &dia2, &mes2, &ano2);

    if ((!verificaDataValida(dia1, mes1, ano1)) || (!verificaDataValida(dia2, mes2, ano2)))
    {
        printf("A primeira e/ou segunda data(s) invalida(s)\n");
        return 0;
    }

    printf("Primeira data: ");
    imprimeDataExtenso(dia1, mes1, ano1);
    printf("Segunda data: ");
    imprimeDataExtenso(dia2, mes2, ano2);

    if (comparaData(dia1, mes1, ano1, dia2, mes2, ano2) == 0)
    {
        printf("As datas sao iguais\n");
        printf("A diferenca em dias entre as datas eh: 00 dias");
        return 0;
    }

    if (comparaData(dia1, mes1, ano1, dia2, mes2, ano2) == 1)
    {
        printf("A segunda data eh mais antiga\n");
        printf("A diferenca em dias entre as datas eh: %.2d dias\n", calculaDiferencaDias(dia1, mes1, ano1, dia2, mes2, ano2));
    }

    if (comparaData(dia1, mes1, ano1, dia2, mes2, ano2) == -1)
    {
        printf("A primeira data eh mais antiga\n");
        printf("A diferenca em dias entre as datas eh: %.2d dias\n", calculaDiferencaDias(dia1, mes1, ano1, dia2, mes2, ano2));
    }
}