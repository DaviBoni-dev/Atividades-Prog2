#include <stdio.h>
#include "matrix_utils.h"


int main() {
    // // Define as matrizes 2x2
    // int matrizA[2][2] = {{1, 2}, {3, 4}};
    // int matrizB[2][2] = {{5, 6}, {7, 8}};
    // int result[2][2];

    // // Exibe os elementos da matriz A
    // printf("Matriz A:\n");
    // matrix_print(2, 2, matrizA);

    // // Exibe os elementos da matriz B
    // printf("\nMatriz B:\n");
    // matrix_print(2, 2, matrizB);

    // printf("Multiplicacao:\n");
    // matrix_multiply(2, 2, matrizA, 2, 2, matrizB, result);
    // matrix_print(2, 2, result);

    // return 0;

    int rows1, cols1, rows2, cols2;
    scanf("%d %d", &rows1, &cols1);
    int matrizA[rows1][cols1];
    matrix_read(rows1, cols1, matrizA);
    scanf("%d %d", &rows2, &cols2);
    int matrizB[rows2][cols2];
    matrix_read(rows2, cols2, matrizB);
   
    int opcao = 0;
    while(opcao != 6){
        printf("1 - Somar matrizes\n");
        printf("2 - Subtrair matrizes\n");
        printf("3 - Multiplicar matrizes\n");
        printf("4 - Multiplicacao de uma matriz por escalar\n");
        printf("5 - Transposta de uma matriz\n");
        printf("6 - Encerrar o programa\n");
        printf("Opcao escolhida: \n");
        scanf("%d", &opcao);

        if(opcao == 1){
            if(possible_matrix_sum(rows1, cols1, rows2, cols2)){
                int result[rows1][cols1];
                matrix_add(rows1, cols1, matrizA, rows2, cols2, matrizB, result);
                matrix_print(rows1, cols1, result);
            }else{
                printf("Erro: as dimensoes da matriz nao correspondem\n");
            }
        }

        if(opcao == 2){
            if(possible_matrix_sub(rows1, cols1, rows2, cols2)){
                int result[rows1][cols1];
                matrix_sub(rows1, cols1, matrizA, rows2, cols2, matrizB, result);
                matrix_print(rows1, cols1, result);
                
            }else{
                printf("Erro: as dimensoes da matriz nao correspondem\n");
                printf("\n");
            }
        }

        if(opcao == 3){
            if(possible_matrix_multiply(cols1, rows2)){
                int result[rows1][cols2];
                matrix_multiply(rows1, cols1, matrizA, rows2, cols2, matrizB, result);
                matrix_print(rows1, cols2, result);
                
            }else{
                printf("Erro: o numero de colunas da primeira matriz eh diferente do numero de linhas da segunda matriz\n");
                printf("\n");
            }
        }

        if(opcao == 4){
            int escalar;
            int matrizDesejada;
            scanf("%d %d", &escalar, &matrizDesejada);
            if(matrizDesejada == 1){
                scalar_multiply(rows1, cols1, matrizA, escalar);
                matrix_print(rows1, cols1, matrizA);
            }
            if(matrizDesejada == 2){
                scalar_multiply(rows2, cols2, matrizB, escalar);
                matrix_print(rows2, cols2, matrizB);
            }
        }

        if(opcao == 5){
            int result1[cols1][rows1];
            int result2[cols2][rows2];
            transpose_matrix(rows1, cols1, matrizA, result1);
            transpose_matrix(rows2, cols2, matrizB, result2);
            matrix_print(cols1, rows1, result1);
            matrix_print(cols2, rows2, result2);
        }

       // printf("\n");
    }
    

    return 0;

}

