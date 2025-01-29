#include <stdio.h>

#include "botao.h"

void botaoClicado()
{
    printf("Apertei o botao\n");
}

int main()
{
    char texto[100];
    int tam;
    char cor[10];
    int tipo;
    printf("lendo texto\n");
    scanf(" %[^\n]", texto);
    printf("%s", texto);
    scanf("%d", &tam);
    scanf(" %[^\n]", cor);
    scanf("%d", &tipo);

    Botao b = CriarBotao(texto, tam, cor, tipo, botaoClicado);
    DesenhaBotao(b, 0);
    ExecutaBotao(b);
    // printf("O texto eh %s\n", b.texto);

    return 0;
}