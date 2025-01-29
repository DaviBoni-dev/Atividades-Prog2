#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

/**
 * Cria um vetor de inteiros de tamanho especificado, alocado dinamicamente.
 * Se houver erro na alocação, imprime uma mensagem de erro e encerra o programa.
 *
 * @param tamanho Tamanho do vetor a ser criado.
 * @return Ponteiro para o vetor criado.
 */
int *CriaVetor(int tamanho)
{
    int *vetor = (int *)malloc(tamanho * sizeof(int));

    if (vetor == NULL)
    {
        printf("Erro ao alocar memória\n");
        exit(1);
    }

    return vetor;
}

/**
 * Lê um vetor de inteiros de tamanho especificado.
 *
 * @param vetor Ponteiro para o vetor a ser lido.
 * @param tamanho Tamanho do vetor a ser lido.
 */
void LeVetor(int *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d\n", &vetor[i]);
    }
}

/**
 * Calcula a média dos valores de um vetor de inteiros de tamanho especificado.
 *
 * @param vetor Ponteiro para o vetor a ser lido.
 * @param tamanho Tamanho do vetor a ser lido.
 * @return Média dos valores do vetor.
 */
float CalculaMedia(int *vetor, int tamanho)
{
    float soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        soma += vetor[i];
    }

    float resultado = soma / tamanho;

    return resultado;
}

/**
 * Libera a memória alocada para um vetor de inteiros.
 *
 * @param vetor Ponteiro para o vetor a ser liberado.
 */
void LiberaVetor(int *vetor)
{
    free(vetor);
}
