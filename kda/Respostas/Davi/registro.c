#include <stdio.h>
#include "registro.h"
#include "jogador.h"

/*
Função que lê apenas um registro de partida a partir da entrada padrão. O registro de uma partida
é composto das informações de 5 jogadores. Verifique a especificação da atividade para mais detalhes.

@param idPartida: ID da partida
@return Registro: Registro de uma partida
*/

Registro leRegistro(int idPartida)
{
    Registro r;
    r.idPartida = idPartida;
    for (int i = 0; i < MAX_JOGADOR_PARTIDA; i++)
    {
        int idJog;
        scanf("%d: ", &idJog);
        r.jogadores[i] = inicializaJogador(idJog);
        r.jogadores[i] = leJogador(idJog);
        scanf("\n");
    }

    return r;
}

/*
Função que busca um jogador em um registro de partida a partir do ID do jogador.
Se o jogador for encontrado, ele é retornado. Caso contrário, um jogador é criado com ID -1 e retornado.

@param r: Registro de uma partida
@param idJog: ID do jogador a ser buscado
*/
Jogador buscaJogadorRegistro(Registro r, int idJog)
{
    for (int i = 0; i < MAX_JOGADOR_PARTIDA; i++)
    {
        if (r.jogadores[i].id == idJog)
        {
            return r.jogadores[i];
        }
    }

    Jogador j = inicializaJogador(-1);
    return j;
}