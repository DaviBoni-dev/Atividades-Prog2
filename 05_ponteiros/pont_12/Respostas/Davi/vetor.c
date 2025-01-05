#include <stdio.h>
#include "vetor.h"

/**
 * @brief Ponteiro para função que recebe dois inteiros e realiza uma operação matemática.
 *
 * return int Resultado da operação matemática.
 */
typedef int (*Operation)(int, int);

/**
 * Lê um vetor da entrada padrão.
 *
 * @param vetor Ponteiro para o vetor que será lido.
 */
void LeVetor(Vetor *vetor)
{
    int tam;
    scanf("%d\n", &tam);
    vetor->tamanhoUtilizado = tam;

    for (int i = 0; i < tam; i++)
    {
        int num;
        scanf("%d", &num);
        vetor->elementos[i] = num;
    }
}

/**
 * Aplica uma operação em um vetor.
 *
 * @param vetor Ponteiro para o vetor que será utilizado.
 * @param op Ponteiro para a função que será aplicada.
 * @return O resultado da operação.
 */
int AplicarOperacaoVetor(Vetor *vetor, Operation op)
{
    int result = op(vetor->elementos[0], vetor->elementos[1]);
    for (int i = 2; i < vetor->tamanhoUtilizado; i++)
    {
        result = op(result, vetor->elementos[i]);
    }

    return result;
}
