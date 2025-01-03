#include <stdio.h>
#include <string.h>
#include "tDepartamento.h"

/**
 * @brief Cria um departamento com os dados passados via parâmetro
 *
 *
 * @param *curso1 Ponteiro para string que contém o nome do primeiro curso do departamento
 * @param *curso2 Ponteiro para string que contém o nome do segundo curso do departamento
 * @param *curso3 Ponteiro para string que contém o nome do terceiro curso do departamento
 * @param *nome Ponteiro para string que contém o nome do departamento
 * @param m1 Nota do primeiro curso (curso1)
 * @param m2 Nota do segundo curso (curso2)
 * @param m3 Nota do terceiro curso (curso3)
 * @param *diretor Ponteiro para string que contém o nome do diretor/chefe do departamento
 */
tDepartamento CriaDepartamento(char *curso1, char *curso2, char *curso3,
                               char *nome, int m1, int m2, int m3, char *diretor)
{
    tDepartamento dep;
    strcpy(dep.curso1, curso1);
    strcpy(dep.curso2, curso2);
    strcpy(dep.curso3, curso3);
    strcpy(dep.nome, nome);
    strcpy(dep.diretor, diretor);
    // if (m1 > 0 && m2 > 0 && m3 > 0)
    //{
    dep.m1 = m1;
    dep.m2 = m2;
    dep.m3 = m3;
    return dep;
    //}
}

/**
 * @brief Imprime os atributos de um departamento em tela
 *
 * @param depto - Um departamento que terá seus dados impressos em tela
 */

void ImprimeAtributosDepartamento(tDepartamento depto)
{
    float m1 = depto.m1;
    float m2 = depto.m2;
    float m3 = depto.m3;

    float media = (m1 + m2 + m3) / 3;
    printf("\nDepartamento: %s\n", depto.nome);
    printf("    Diretor: %s\n", depto.diretor);
    printf("    1o curso: %s\n", depto.curso1);
    printf("    Media do 1o curso: %d\n", depto.m1);
    printf("    2o curso: %s\n", depto.curso2);
    printf("    Media do 2o curso: %d\n", depto.m2);
    printf("    3o curso: %s\n", depto.curso3);
    printf("    Media do 3o curso: %d\n", depto.m3);
    printf("    Media dos cursos: %.2f\n", media);
}

/**
 * @brief Ordena os departamentos de acordo com as médias das notas de cada um dos seus três cursos (da maior para a menor).
 *
 * @param *vetor_deptos - Ponteiro para um vetor de departamentos
 * @param num_deptos - O número de departamentos contidos no vetor_deptos
 */
void OrdenaDepartamentosPorMedia(tDepartamento *vetor_deptos, int num_deptos)
{
    for (int i = 0; i < num_deptos; i++)
    {

        if (vetor_deptos[i].m1 > vetor_deptos[i].m2 && vetor_deptos[i].m1 > vetor_deptos[i].m3)
        {
            if (vetor_deptos[i].m2 > vetor_deptos[i].m3)
            {
            }
            else if (vetor_deptos[i].m3 > vetor_deptos[i].m2)
            {
                int temp = vetor_deptos[i].m3;
                vetor_deptos[i].m3 = vetor_deptos[i].m2;
                vetor_deptos[i].m2 = temp;
            }
        }
        else if (vetor_deptos[i].m2 > vetor_deptos[i].m1 && vetor_deptos[i].m2 > vetor_deptos[i].m3)
        {
            if (vetor_deptos[i].m1 > vetor_deptos[i].m3)
            {
                int temp = vetor_deptos[i].m2;
                vetor_deptos[i].m2 = vetor_deptos[i].m1;
                vetor_deptos[i].m1 = temp;
            }
            else if (vetor_deptos[i].m1 < vetor_deptos[i].m3)
            {
                int temp2 = vetor_deptos[i].m2;
                int temp1 = vetor_deptos[i].m1;
                int temp3 = vetor_deptos[i].m3;
                vetor_deptos[i].m2 = temp3;
                vetor_deptos[i].m1 = temp2;
                vetor_deptos[i].m3 = temp1;
            }
        }
        else if (vetor_deptos[i].m3 > vetor_deptos[i].m1 && vetor_deptos[i].m3 > vetor_deptos[i].m2)
        {
            if (vetor_deptos[i].m1 > vetor_deptos[i].m2)
            {
                int temp = vetor_deptos[i].m1;
                vetor_deptos[i].m1 = vetor_deptos[i].m3;
                vetor_deptos[i].m3 = temp;
            }
            else if (vetor_deptos[i].m1 < vetor_deptos[i].m2)
            {
                int temp2 = vetor_deptos[i].m2;
                int temp1 = vetor_deptos[i].m1;
                int temp3 = vetor_deptos[i].m3;
                vetor_deptos[i].m2 = temp2;
                vetor_deptos[i].m1 = temp3;
                vetor_deptos[i].m3 = temp1;
            }
        }
    }
}