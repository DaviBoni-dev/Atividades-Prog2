#include <stdio.h>
#include "lesao.h"
#include "data.h"
#include "paciente.h"
#include "constantes.h"

int calculaMediaIdade(int qtdPac, Paciente grupoPac[TAM_DIAG])
{
    if (qtdPac == 0)
    {
        return 0;
    }

    Data d = setData();

    int somaIdades = 0;
    for (int i = 0; i < qtdPac; i++)
    {
        somaIdades += diferencaAnosData(grupoPac[i].data, d);
    }

    return somaIdades / qtdPac;
}

int calculaStats(int qtdPac, int qtdLes, int qtdCirurg, Paciente grupoPac[TAM_DIAG])
{
    printf("TOTAL PACIENTES: %d\n", qtdPac);
    printf("MEDIA IDADE (ANOS): %d\n", calculaMediaIdade(qtdPac, grupoPac));
    printf("TOTAL LESOES: %d\n", qtdLes);
    printf("TOTAL CIRURGIAS: %d\n", qtdCirurg);
    printf("LISTA DE PACIENTES:\n");
    for (int i = 0; i < qtdPac; i++)
    {
        imprimeLesoesPaciente(grupoPac[i]);
    }
}

int main()
{
    char op;
    int quantidadePac = 0;
    int quantidadesLes = 0;
    int cirugias = 0;
    Paciente grupoPacientes[TAM_DIAG];

    while (1)
    {
        scanf("%c\n", &op);

        if (op == 'F')
        {
            break;
        }

        if (op == 'P')
        {
            if (quantidadePac >= 100)
            {
                break;
            }
            grupoPacientes[quantidadePac] = lerPaciente();
            // imprimePaciente(grupoPacientes[quantidadePac]);
            quantidadePac++;
            //  printf("\n");
        }

        if (op == 'L')
        {
            Lesao les = lerLesao();
            // imprimeLesao(les);
            // printf("\n");
            char lesaoSus[TAM_DIAG];
            getCartaoSusLesao(les, lesaoSus);
            //  printf("Cartao dessa Lesao eh %s", lesaoSus);
            //  printf("\n");

            for (int i = 0; i < quantidadePac; i++)
            {
                if (comparaCartaoSusPaciente(grupoPacientes[i], lesaoSus))
                {
                    if (precisaCirurgiaLesao(les))
                    {
                        cirugias++;
                    }
                    grupoPacientes[i] = atribuirLesaoPaciente(grupoPacientes[i], les);
                    quantidadesLes++;
                    break;
                }
            }
            //  printf("\n");
        }
    }

    calculaStats(quantidadePac, quantidadesLes, cirugias, grupoPacientes);

    // printf("Teve %d pacientes cadastrados e %d lesoes cadastradas\n", quantidadePac, quantidadesLes);
}