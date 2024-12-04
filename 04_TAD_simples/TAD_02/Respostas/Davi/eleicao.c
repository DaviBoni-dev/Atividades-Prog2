#include <stdio.h>
#include "eleicao.h"
#include "candidato.h"
#include "eleitor.h"

// #define MAX_CANDIDATOS_POR_CARGO 3
// #define MAX_ELEITORES 10

// typedef struct
// {
//     tCandidato presidentes[MAX_CANDIDATOS_POR_CARGO];
//     int totalPresidentes;

//     tCandidato governadores[MAX_CANDIDATOS_POR_CARGO];
//     int totalGovernadores;

//     int votosBrancosPresidente;
//     int votosNulosPresidente;

//     int votosBrancosGovernador;
//     int votosNulosGovernador;

//     tEleitor eleitores[MAX_ELEITORES];
//     int totalEleitores;

// } tEleicao;

/**
 * @brief Inicializa uma eleição com valores padrão (zerando os votos invalidos).
 * Ainda nessa função, é lido a quantidade de candidatos e os candidatos são lidos e armazenados.
 * @return Eleição inicializada.
 */
tEleicao InicializaEleicao()
{
    tEleicao eleicao;
    eleicao.totalEleitores = 0;
    eleicao.votosBrancosGovernador = 0;
    eleicao.votosBrancosPresidente = 0;
    eleicao.votosNulosGovernador = 0;
    eleicao.votosNulosPresidente = 0;
    int quantidadePartic;
    int presidentes = 0;
    int gov = 0;

    scanf("%d", &quantidadePartic);
    for (int i = 0; i < quantidadePartic; i++)
    {
        tCandidato cand = LeCandidato();
        char cargo = ObtemCargo(cand);
        if (cargo == 'P')
        {
            eleicao.presidentes[presidentes] = CriaCandidato(cand.nome, cand.partido, cand.cargo, cand.id);
            presidentes++;
        }
        else if (cargo == 'G')
        {
            eleicao.governadores[gov] = CriaCandidato(cand.nome, cand.partido, cand.cargo, cand.id);
            gov++;
        }
    }

    eleicao.totalPresidentes = presidentes;
    eleicao.totalGovernadores = gov;

    return eleicao;
}

/**
 * @brief Realiza uma eleição.
 * Nessa função, é lido a quantidade de eleitores e os eleitores são lidos e armazenados.
 * @param eleicao Eleição a ser realizada.
 * @return Eleição com os resultados da votação.
 */
tEleicao RealizaEleicao(tEleicao eleicao)
{
    int totalEl;
    scanf("%d\n", &totalEl);
    for (int i = 0; i < totalEl; i++)
    {
        tEleitor el = LeEleitor();
        eleicao.eleitores[i] = CriaEleitor(el.id, el.votoP, el.votoG);
    }

    eleicao.totalEleitores = totalEl;
    return eleicao;
}

/**
 * @brief Imprime o resultado da eleição na tela a partir da aparucao dos votos.
 * @param eleicao Eleição a ser impressa.
 */
void ImprimeResultadoEleicao(tEleicao eleicao)
{
    int eleitorVoltou = 0;
    for (int i = 0; i < eleicao.totalEleitores; i++)
    {
        for (int j = i + 1; i < eleicao.totalEleitores; i++)
        {
            if (EhMesmoEleitor(eleicao.eleitores[i], eleicao.eleitores[j]))
            {
                eleitorVoltou = 1;
            }
        }
    }

    if (eleitorVoltou == 1)
    {
        printf("ELEICAO ANULADA");
    }
    else if (eleicao.totalEleitores > MAX_ELEITORES)
    {
        printf("ELEICAO ANULADA");
    }
    else if (eleicao.totalPresidentes > MAX_CANDIDATOS_POR_CARGO || eleicao.totalGovernadores > MAX_CANDIDATOS_POR_CARGO)
    {
        printf("ELEICAO ANULADA");
    }
}

// int main()
// {
//     tEleicao ele = InicializaEleicao();
//     // printf("presidentes:\n");
//     // for (int i = 0; i < ele.totalPresidentes; i++)
//     // {
//     //     ImprimeCandidato(ele.presidentes[i], 100);
//     // }
//     // printf("governadores:\n");
//     // for (int i = 0; i < ele.totalGovernadores; i++)
//     // {
//     //     ImprimeCandidato(ele.governadores[i], 100);
//     // }
//     ele = RealizaEleicao(ele);
//     ImprimeResultadoEleicao(ele);
// }