#include <stdio.h>
#include "tDepartamento.h"

int main()
{
    int qtd;
    char nome[STRING_MAX];
    char diretor[STRING_MAX];
    char curso1[STRING_MAX];
    char curso2[STRING_MAX];
    char curso3[STRING_MAX];
    int m1, m2, m3;
    tDepartamento deps[100];
    scanf("%d\n", &qtd);
    printf("\n");
    for (int i = 0; i < qtd; i++)
    {
        scanf("%[^\n]\n", nome);
        scanf("%[^\n]\n", diretor),
            scanf("%[^\n]\n", curso1);
        scanf("%[^\n]\n", curso2);
        scanf("%[^\n]\n", curso3);
        scanf("%d %d %d\n", &m1, &m2, &m3);
        if (m1 < 0 || m2 < 0 || m3 < 0)
        {
            printf("Digite um departamento com médias válidas\n");
            i--;
            continue;
        }

        deps[i] = CriaDepartamento(curso1, curso2, curso3, nome, m1, m2, m3, diretor);
    }
    OrdenaDepartamentosPorMedia(deps, qtd);
    for (int i = 0; i < qtd; i++)
    {
        ImprimeAtributosDepartamento(deps[i]);
    }
}