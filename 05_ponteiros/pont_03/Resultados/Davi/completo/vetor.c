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
    printf("\n");
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
    int menor = *paraTrocar; // Inicializa com o valor a ser comparado
    int indice = -1;         // Índice inicial indicando que não encontrou ainda

    for (int i = 0; i < tam; i++)
    {
        if (vet[i] < menor)
        {
            menor = vet[i];
            indice = i;
        }
    }

    // Realiza a troca apenas se um menor valor for encontrado
    if (indice != -1)
    {
        int temp = *paraTrocar;
        *paraTrocar = vet[indice];
        vet[indice] = temp;
    }
}

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
    for (int i = 0; i < tam - 1; i++)
    {
        TrocaSeAcharMenor(vet + i, tam - i, &vet[i]);
    }
    // for (int i = 0; i < tam - 1; i++) // Até o penúltimo elemento
    // {
    //     int menorIndice = i;

    //     // Encontra o índice do menor valor no restante do vetor
    //     for (int j = i + 1; j < tam; j++)
    //     {
    //         // if (vet[j] < vet[menorIndice])
    //         // {
    //         //     menorIndice = j;
    //         // }
    //         TrocaSeAcharMenor(vet, tam, &vet[j]);
    //     }

    //     // Troca o valor atual com o menor encontrado
    //     // if (menorIndice != i)
    //     // {
    //     //     int temp = vet[i];
    //     //     vet[i] = vet[menorIndice];
    //     //     vet[menorIndice] = temp;
    //     // }
    // }
}
