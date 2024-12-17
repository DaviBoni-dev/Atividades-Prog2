#include <stdio.h>
#include <string.h>
#include "evento.h"

/**
 * Cadastra um novo evento no calendário e o insere na próxima posição do array.
 *
 * @param eventos Array de eventos onde o novo evento será cadastrado.
 * @param numEventos Ponteiro para o número atual de eventos cadastrados.
 */
void cadastrarEvento(Evento *eventos, int *numEventos)
{
    char nome[50];
    int dia, mes, ano;
    scanf("%[^\n]\n", nome);
    scanf("%d %d %d\n", &dia, &mes, &ano);
    strcpy(eventos[*numEventos].nome, nome);
    eventos[*numEventos].dia = dia;
    eventos[*numEventos].mes = mes;
    eventos[*numEventos].ano = ano;
}

/**
 * Exibe todos os eventos cadastrados no calendário.
 *
 * @param eventos Array de eventos a serem exibidos.
 * @param numEventos Ponteiro para o número total de eventos cadastrados.
 */
void exibirEventos(Evento *eventos, int *numEventos)
{
    for (int i = 0; i < *numEventos; i++)
    {
        printf("%d - %s - %d/%d/%d\n", i, eventos[i].nome, eventos[i].dia, eventos[i].mes, eventos[i].ano);
    }
}

/**
 * Troca a data de um evento específico no calendário.
 *
 * @param eventos Array de eventos onde o evento será modificado.
 * @param numEventos Ponteiro para o número total de eventos cadastrados.
 */
void trocarDataEvento(Evento *eventos, int *numEventos)
{
    int indice, dia, mes, ano;
    scanf("%d\n", &indice);
    scanf("%d %d %d\n", &dia, &mes, &ano);
    if (indice >= 0 && indice <= *numEventos)
    {
        eventos[indice].dia = dia;
        eventos[indice].mes = mes;
        eventos[indice].ano = ano;
    }
    else
    {
        printf("Indice invalido!\n");
    }
}

/**
 * Troca a posição de dois eventos, a partir do índice, dentro do array de eventos.
 *
 * @param eventos Array de eventos onde a troca será realizada.
 * @param indiceA Ponteiro para o primeiro índice.
 * @param indiceB Ponteiro para o segundo índice.
 * @param numEventos Ponteiro para o número total de eventos cadastrados.
 */
void trocarIndicesEventos(Evento *eventos, int *indiceA, int *indiceB, int *numEventos)
{
    Evento temp;
    if (*indiceA >= 0 && *indiceA <= *numEventos && *indiceB >= 0 && *indiceB <= *numEventos)
    {
        temp = eventos[*indiceA];
        eventos[*indiceA] = eventos[*indiceB];
        eventos[*indiceB] = temp;
    }
    else
    {
        printf("Indices invalidos!\n");
    }
}
