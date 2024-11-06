#include <stdio.h>

int contaOcorrencias(int vetor[],int tamanhoVetor,int numeroProcurado) {
    if(tamanhoVetor == 0) {
        return 0;
    }
    else if(vetor[tamanhoVetor - 1] == numeroProcurado) {
        return 1 + contaOcorrencias(vetor, tamanhoVetor - 1, numeroProcurado);
    }
    else{
        return contaOcorrencias(vetor, tamanhoVetor - 1, numeroProcurado);
    }
}

int main() {
    int qntdCasos;

    scanf("%d", &qntdCasos);
    for(int i = 0; i < qntdCasos; i++) {
        int numOjetivo;
        int tamanhoVetor;
        int qntdOcorrencias;
        scanf("%d %d", &numOjetivo, &tamanhoVetor);
        int vetor[tamanhoVetor];
        for(int j = 0; j < tamanhoVetor; j++) {
            scanf("%d", &vetor[j]);
        }

        qntdOcorrencias = contaOcorrencias(vetor, tamanhoVetor, numOjetivo);
        printf("%d\n", qntdOcorrencias);

    }
}