#include <stdio.h>

int imprimirContrario(char palavra[], int tamanho){
    if(tamanho == 1){
        printf("%c ", palavra[0]);
        return 0;
    }
    else if(tamanho > 1){
        printf("%c", palavra[tamanho - 1]);
        imprimirContrario(palavra, tamanho - 1);
    }
}

int tamanhoString(char palavra[]){
    int tamanho = 0;
    while(palavra[tamanho] != '\0'){
        tamanho++;
    }

    return tamanho;
}

int main() {
    char palavra[100];
    while(scanf("%s", palavra) == 1){
        int tamanho = tamanhoString(palavra);
        imprimirContrario(palavra, tamanho);
        
    }
}