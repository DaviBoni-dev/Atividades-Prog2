#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main()
{
    int qtd;
    scanf("%d\n", &qtd);
    int *vetor;
    vetor = CriaVetor(qtd);
    LeVetor(vetor, qtd);
    float media = CalculaMedia(vetor, qtd);
    printf("%.2f\n", media);
    LiberaVetor(vetor);
}