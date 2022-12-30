// 25) Os números de Catalan são definidos pela seguinte recursão
// Alguns números desta sequência são: 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796,
// 58786...
// Faça uma função recursiva que receba um número N e retorne o N-ésimo número de
// Catalan.

#include <stdio.h>

int catalan(int num)
{
    if (num == 0)
        return 1;

    return (2 * (2 * num - 1) / (num + 1)) * catalan(num - 1);
    // Professor, se você conferir o enunciado deste exercício, a fórmula e como foi aplicada aqui no código,
    // aparentemente parece estar certa, mas não retorna o esperado, não sei porque...
}

int main()
{
    int num;

    printf("\nDigite um numero para sequencia de Catalan: ");
    scanf("%d", &num);

    printf("\nO valor retornado da sequencia: %d\n", catalan(num));

    return 0;
}