#include <stdio.h>
#include "jogada.h"

/**
 * Lê uma jogada e retorna uma estrutura do tipo tJogada e define o valor da variavel sucesso.
 * Se a jogada foi lida com sucesso, ou seja, foi lido um valor para x e outro para y, sucesso = 1, caso contrário, sucesso = 0.
 * @return a jogada lida.
 */
tJogada LeJogada()
{
    tJogada jogada;
    if (scanf("%d %d", &jogada.x, &jogada.y) == 2)
    {
        jogada.sucesso = 1;
    }
    else
    {
        jogada.sucesso = 0;
    }

    return jogada;
}

/**
 * Retorna a coordenada X da jogada.
 *
 * @param jogada a jogada.
 *
 * @return a coordenada X da jogada.
 */
int ObtemJogadaX(tJogada jogada)
{
    return jogada.x;
}

/**
 * Retorna a coordenada Y da jogada.
 *
 * @param jogada a jogada.
 *
 * @return a coordenada Y da jogada.
 */
int ObtemJogadaY(tJogada jogada)
{
    return jogada.y;
}

/**
 * Retorna 1 se a jogada foi bem sucedida e 0 caso contrário.
 *
 * @param jogada a jogada.
 *
 * @return 1 se a jogada foi bem sucedida, 0 caso contrário.
 */
int FoiJogadaBemSucedida(tJogada jogada)
{
    if (jogada.sucesso == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}