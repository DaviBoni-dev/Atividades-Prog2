#include <stdio.h>
#include <string.h>
#include "paciente.h"
#include "lesao.h"
#include "constantes.h"

Paciente lerPaciente()
{
    Paciente pac;
    scanf("%[^\n]\n", pac.nome);
    pac.data = lerData();
    scanf("\n");
    scanf("%[^\n]\n", pac.carSus);
    scanf("%c", &pac.genero);

    return pac;
}

void imprimePaciente(Paciente pac)
{
    printf("---------PACIENTE--------\n");
    printf("NOME: %s\n", pac.nome);
    printf("Data: ");
    imprimeData(pac.data);
    printf("\n");
    printf("SUS: %s\n", pac.carSus);
    printf("GENERO: %c\n", pac.genero);
}

int comparaCartaoSusPaciente(Paciente pac, char carSusLes[TAM_DIAG])
{
    if (!strcmp(pac.carSus, carSusLes))
        return 1;

    return 0;
}

Paciente atribuirLesaoPaciente(Paciente pac, Lesao les)
{
    if (pac.qtdLesoes < TAM_LESOES_PAC)
    {
        pac.lesoes[pac.qtdLesoes] = les;
        pac.qtdLesoes++;
    }

    return pac;
}

void imprimeLesoesPaciente(Paciente pac)
{

    for (int i = 0; i < pac.qtdLesoes; i++)
    {
        printf("- %s - ", pac.nome);
        printf("%s ", pac.lesoes[i].id);
        printf("\n");
    }
}