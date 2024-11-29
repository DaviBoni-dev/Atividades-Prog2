#ifndef _PACIENTE_H
#define _PACIENTE_H

#include "constantes.h"
#include "data.h"
#include "lesao.h"

typedef struct
{
    char nome[TAM_NOME];
    Data data;
    char carSus[TAM_CAR];
    char genero;
    Lesao lesoes[TAM_LESOES_PAC];
    int qtdLesoes;
} Paciente;

Paciente lerPaciente();
void imprimePaciente(Paciente pac);
int comparaCartaoSusPaciente(Paciente pac, char carSusLes[TAM_DIAG]);
Paciente atribuirLesaoPaciente(Paciente pac, Lesao les);
void imprimeLesoesPaciente(Paciente pac);

#endif