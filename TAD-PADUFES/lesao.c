#include <stdio.h>
#include <string.h>
#include "lesao.h"

Lesao lerLesao()
{
    Lesao les;
    scanf("%[^\n]\n", les.carSus);
    scanf("%[^\n]\n", les.id);
    scanf("%[^\n]\n", les.diag);
    scanf("%[^\n]\n", les.reg);
    scanf("%d\n", &les.malig);

    return les;
}
void imprimeLesao(Lesao les)
{
    printf("-------LESAO-------\n");
    printf("SUS: %s\n", les.carSus);
    printf("ID: %s\n", les.id);
    printf("Diag: %s\n", les.diag);
    printf("Regiao: %s\n", les.reg);
    printf("Malig: %d", les.malig);
}

int comparaCartaoLesao(Lesao les, *char sus)
{
    if (strcmp(les.carSus, sus))
        return 1;

    return 0;
}