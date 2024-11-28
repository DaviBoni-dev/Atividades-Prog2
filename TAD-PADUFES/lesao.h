#ifndef _LESAO_H
#define _LESAO_H

#include "constantes.h"

typedef struct
{
    char id[TAM_ID];
    char diag[TAM_DIAG];
    char reg[TAM_REG];
    int malig;
    char carSus[TAM_CAR];
} Lesao;

Lesao lerLesao();
void imprimeLesao(Lesao les);
int comparaCartaoLesao(Lesao les, *char sus);

#endif