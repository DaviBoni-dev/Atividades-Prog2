#include <stdio.h>
#include "servidor.h"
#include "jogador.h"
#include "registro.h"

/*
Função que lê todos os registros de partidas de um servidor a partir da entrada padrão e retorna um servidor
com todos os registros de partidas lidos. Conforme a especificação da atividade, a leitura é encerrada quando
um ID de partida igual a -1 é lido.

@return Servidor: Servidor com todos os registros de partidas lidos
*/
Servidor leRegistrosServidor()
{
    Servidor s;

    int idPartida;
    int contador = 0;
    while (1)
    {
        scanf("%d", &idPartida);
        if (idPartida == -1)
        {
            break;
        }
        s.partidas[contador] = leRegistro(idPartida);
        contador++;
    }

    s.nPartidas = contador;
    return s;
}

/*
Função que recebe um servidor já preenchido com os dados de todas as partidas e um ID de jogador.
A partir dessas informações, ela busca as estatísticas do jogador em todas as partidas que ele participou.
Se o jogar não for encontrado, um jogador com ID -1 é criado e retornado.
Se o jogador for encontrado em apenas uma partida, ele é retornado.
Se o jogador for encontrado em mais de uma partida, suas estatísticas são agregadas e o jogador é retornado.

@param s: Servidor
@param idJog: ID do jogador
*/
Jogador buscaDadosJogadorServidor(Servidor s, int idJog)
{

    Jogador jog = inicializaJogador(idJog);

    int achouJogador = 0;
    for (int i = 0; i < s.nPartidas; i++)
    {

        for (int j = 0; j < MAX_JOGADOR_PARTIDA; j++)
        {

            if (s.partidas[i].jogadores[j].id == idJog)
            {
                achouJogador += 1;
                jog = atualizaJogador(jog, idJog, s.partidas[i].jogadores[j].kills, s.partidas[i].jogadores[j].deaths, s.partidas[i].jogadores[j].assists);
            }
        }
    }

    if (achouJogador == 0)
    {
        Jogador j;
        j = inicializaJogador(-1);
        return j;
    }
    else
    {
        return jog;
    }
}

/*
Função que recebe um servidor já criado e preenchido e imprime um relatório com as estatísticas de um conjunto de jogadores
solicitados a partir da entrada padrão. O relatório é impresso conforme o formato especificado na descrição da atividade.
*/
void criaRelatorioServidor(Servidor s)
{
    int qtdJogAnalis;
    scanf("%d", &qtdJogAnalis);
    // printf("Analisaremos %d jogadores\n", qtdJogAnalis);
    int idsAnalisados[qtdJogAnalis];
    for (int i = 0; i < qtdJogAnalis; i++)
    {
        scanf("%d", &idsAnalisados[i]);
        // printf("%d ", i dsAnalisados[i]);
    }
    // printf("\n");
    for (int i = 0; i < qtdJogAnalis; i++)
    {
        Jogador j = buscaDadosJogadorServidor(s, idsAnalisados[i]);
        if (j.id == -1)
        {
            printf("Jogador %d: -\n", idsAnalisados[i]);
        }
        else
        {
            printaJogador(j);
        }
    }
}