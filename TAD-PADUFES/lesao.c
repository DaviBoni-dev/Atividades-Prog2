#include <stdio.h>
#include <string.h>
#include "lesao.h"
#include "constantes.h"

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

void getCartaoSusLesao(Lesao les, char susLes[TAM_DIAG])
{
    strcpy(susLes, les.carSus);
}

int precisaCirurgiaLesao(Lesao les)
{
    if (les.malig > 50)
        return 1;

    return 0;
}