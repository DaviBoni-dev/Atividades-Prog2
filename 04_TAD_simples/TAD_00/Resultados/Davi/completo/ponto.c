#include <stdio.h>
#include <math.h>
#include "ponto.h"

Ponto pto_cria(float x, float y)
{
    Ponto novoPonto = {x, y};
    return novoPonto;
}

/* Funcao acessa x
** Retorna o valor da coordenada x de um ponto
*/
float pto_acessa_x(Ponto p)
{
    return p.x;
}

/* Funcao acessa y
** Retorna o valor da coordenada x de um ponto
*/
float pto_acessa_y(Ponto p)
{
    return p.y;
}

/* Funcao atribui x
** Atribui novo valor as coordenada x de um ponto
*/
Ponto pto_atribui_x(Ponto p, float x)
{
    p.x = x;
    return p;
}

/* Funcao atribui y
** Atribui novo valor as coordenada x de um ponto
*/
Ponto pto_atribui_y(Ponto p, float y)
{
    p.y = y;
    return p;
}

/* Funcao distancia
** Retorna a distancia entre dois pontos
*/
float pto_distancia(Ponto p1, Ponto p2)
{
    float distancia;
    float diferencaX = p2.x - p1.x;
    float quadradoX = pow(diferencaX, 2);
    float diferencaY = p2.y - p1.y;
    float quadradoY = pow(diferencaY, 2);
    float somaQuadrados = quadradoX + quadradoY;
    distancia = sqrt(somaQuadrados);
    return distancia;
}
