#include <stdio.h>
#include "string_utils.h"

int main()
{
    char string[100];
    char stringCopiada[100];
    int i = 0;
    while (1)
    {
        scanf("%c", &string[i]); // Corrige a passagem do endereço
        if (string[i] == '\n')
        {                     // Corrige a comparação
            string[i] = '\0'; // Adiciona o caractere nulo para finalizar a string
            break;
        }
        i++;
    }
    // scanf("%[^\n]", string);
    int numeroSelecionado = 0;
    while (numeroSelecionado != 6)
    {
        printf("1 - Tamanho da string\n2 - Copiar string\n3 - Converter string para letras maiusculas\n4 - Converter string para letras minusculas\n5 - Imprimir string ao contrario\n6 - Encerrar o programa\nOpcao escolhida: \n");

        scanf("%d", &numeroSelecionado);

        if (numeroSelecionado == 1)
        {
            printf("Tamanho da string: %d\n", string_length(string));
        }

        if (numeroSelecionado == 2)
        {
            string_copy(string, stringCopiada);
            printf("String copiada: %s\n", stringCopiada);
        }

        if (numeroSelecionado == 3)
        {
            string_upper(string);
            printf("String convertida para maiusculas: %s\n", string);
        }

        if (numeroSelecionado == 4)
        {
            string_lower(string);
            printf("String convertida para minusculas: %s\n", string);
        }

        if (numeroSelecionado == 5)
        {
            string_reverse(string);
            printf("String invertida: %s\n", string);
        }

        printf("\n");
    }
}