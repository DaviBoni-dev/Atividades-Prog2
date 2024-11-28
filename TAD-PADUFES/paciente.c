#include <stdio.h>
#include "paciente.h"

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