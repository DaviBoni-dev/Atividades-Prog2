#include <stdio.h>
#include "vetor.h"

/**
 * @brief Lê dados do usuário e armazena em um vetor.
 *
 * Esta função recebe como parâmetro um vetor e seu tamanho, e lê do usuário os valores a serem armazenados no vetor.
 *
 * @param vet Ponteiro para o vetor que receberá os valores lidos.
 * @param tam Tamanho do vetor.
 */
void LeDadosParaVetor(int *vet, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &vet[i]);
    }
}

/**
 * @brief Imprime os dados de um vetor na tela.
 *
 * Esta função recebe como parâmetro um vetor e seu tamanho, e imprime na tela os valores armazenados no vetor.
 *
 * @param n Ponteiro para o vetor a ser impresso.
 * @param tam Tamanho do vetor.
 */
void ImprimeDadosDoVetor(int *n, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", n[i]);
    }
}

/**
 * @brief Troca o valor de duas variáveis se o segundo for menor que o primeiro.
 *
 *
 * Obs.: Essa função tem o comportamento de encontrar o menor valor no vetor vet de tamanho tam,
 *  se esse valor for menor do que o valor apontado por paraTrocar, realiza uma troca.
 *  Ao final da execução, a variável apontada por paraTrocar terá o menor valor encontrado no vetor vet.
 *
 * @param vet Ponteiro para o vetor a ser percorrido.
 * @param tam Tamanho do vetor.
 * @param paraTrocar Ponteiro para a variável que armazenará o índice do menor valor encontrado.
 */
void TrocaSeAcharMenor(int *vet, int tam, int *paraTrocar)
{

    // Validações básicas
    if (vet == NULL || paraTrocar == NULL || tam <= 0)
        return; // Sai da função se os parâmetros forem inválidos

    // Inicializa menor valor e índice
    int menor = vet[0];
    int indiceMenor = 0;

    // Percorre o vetor para encontrar o menor valor
    for (int i = 0; i < tam; i++)
    {
        if (vet[i] < menor)
        {
            menor = vet[i];
            indiceMenor = i;
        }
    }

    // Verifica se o índice em *paraTrocar é válido
    if (*paraTrocar < 0 || *paraTrocar >= tam)
        return; // Sai da função se o índice for inválido

    // Realiza a troca apenas se o menor valor for menor que vet[*paraTrocar]
    if (menor < vet[*paraTrocar])
    {
        int temp = vet[indiceMenor];
        vet[indiceMenor] = vet[*paraTrocar];
        vet[*paraTrocar] = temp;

        // Atualiza paraTrocar para o índice do menor valor
        *paraTrocar = indiceMenor;
    }
}
// int menor = vet[0];
// int indice = 0;
// for (int i = 0; i < tam; i++)
// {
//     if (vet[i] < menor)
//     {
//         menor = vet[i];
//         indice = i;
//     }
// }

// if (menor < vet[*paraTrocar])
// {
//     int temp = vet[indice];
//     int indiceMenor = *paraTrocar;
//     vet[indice] = vet[indiceMenor];
//     vet[indiceMenor] = temp;
// }

/**
 * @brief Ordena um vetor em ordem crescente.
 *
 * Esta função recebe como parâmetro um vetor e seu tamanho, e ordena os valores do vetor em ordem crescente.
 *
 * @param vet Ponteiro para o vetor a ser ordenado.
 * @param tam Tamanho do vetor.
 */
void OrdeneCrescente(int *vet, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        TrocaSeAcharMenor(vet, tam, &vet[i]);
    }
}
