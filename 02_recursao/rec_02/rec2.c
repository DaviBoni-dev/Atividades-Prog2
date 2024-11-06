#include <stdio.h>
    
int soma = 0;

int somaElementosPares(int vetor[], int tamanhoVetor){
    if(tamanhoVetor > 0){
        if(vetor[tamanhoVetor - 1] % 2 == 0){
            soma += vetor[tamanhoVetor - 1];
        }

        somaElementosPares(vetor, tamanhoVetor - 1);
    }
    else{
        return soma;
    }

}

int printarVetor(int vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}

int main() {
    int qntdVetores;
    int tamanhoVetor;
    int somaPares;
    scanf("%d\n", &qntdVetores);
    for(int i = 0; i < qntdVetores; i++){
        scanf("%d\n", &tamanhoVetor);
        
        int vetor[tamanhoVetor];
        
        for(int j = 0; j < tamanhoVetor; j++){
            scanf("%d", &vetor[j]);
        }
        soma = 0;
       // printarVetor(vetor, tamanhoVetor);

        somaPares = somaElementosPares(vetor, tamanhoVetor);
        printf("%d\n", somaPares);

    }
}