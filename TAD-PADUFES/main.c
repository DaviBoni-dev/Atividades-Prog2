#include <stdio.h>
#include "lesao.h"
#include "paciente.h"
#include "constantes.h"

int main()
{
    // Data d = lerData();
    // imprimeData(d);
    // Lesao les = lerLesao();
    // imprimeLesao(les);
    // Paciente pac = lerPaciente();
    // imprimePaciente(pac);

    char op;
    int quantidadePac = 0;
    int quantidadesLeds = 0;
    Paciente grupoPacientes[TAM_DIAG];

    while (1)
    {
        scanf("%c\n", &op);
        if (op == 'P')
        {
            grupoPacientes[quantidadePac] = lerPaciente();
            quantidadePac++;
            // imprimePaciente(pac);
            // printf("\n");
        }

        if (op == 'L')
        {
            Lesao les = lerLesao();
            imprimeLesao(les);
            printf("\n");
        }
    }
}