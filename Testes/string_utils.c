
#include <stdio.h>
#include "string_utils.h"

/**
 * @brief Retorna o tamanho de uma string.
 * @param str A string para obter o tamanho.
 * @return O tamanho da string.
 */
int string_length(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }

    return i;
}

/**
 * @brief Copia uma string de origem para destino.
 * @param src A string de origem.
 * @param dest A string de destino.
 */
void string_copy(char *src, char *dest)
{
    int tamanho = string_length(src);
    for (int i = 0; i < tamanho; i++)
    {
        dest[i] = src[i];
    }
}

/**
 * @brief Converte todos os caracteres de uma string para maiúsculas.
 * @param str A string para converter.
 */
void string_upper(char *str)
{
    int tamanho = string_length(str);
    for (int i = 0; i < tamanho; i++)
    {
        int correspondenteAsc = str[i];
        if (correspondenteAsc >= 97 && correspondenteAsc <= 122)
        {
            str[i] = correspondenteAsc - 32;
        }
    }
}

/**
 * @brief Converte todos os caracteres de uma string para minúsculas.
 * @param str A string para converter.
 */
void string_lower(char *str)
{
    int tamanho = string_length(str);
    for (int i = 0; i < tamanho; i++)
    {
        int correspondenteAsc = str[i];
        if (correspondenteAsc >= 65 && correspondenteAsc <= 90)
        {
            str[i] = correspondenteAsc + 32;
        }
    }
}

/**
 * @brief Inverte uma string.
 * @param str A string para inverter.
 */
void string_reverse(char *str)
{
    int tamanho = string_length(str);
    char novaString[tamanho];
    string_copy(str, novaString);
    int j = tamanho - 2;
    for (int i = 0; i < tamanho; i++)
    {
        str[i] = novaString[j];
        j--;
    }
}
