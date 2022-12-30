// 23) A sequência de Padovan é uma sequência de naturais P(n) definida pelos valores
// iniciais
// P(0) = P(1) = p(2) = 1
// e a seguinte relação recursiva
// P(n) = P(n - 2) + P(n - 3) se n > 2
// Alguns valores da sequência são: 1, 1, 1, 2, 2, 3, 4, 5, 7, 9, 12, 16, 21, 28...
// Faça uma função recursiva que receba um número N e retorne o N-ésimo termo da
// sequência de Padovan.

#include <stdio.h>

int padovan(int num)
{
    if (num == 0, num == 1, num == 2)
        return 1;

    if (num > 2)
    {
        return padovan(num - 2) + padovan(num - 3);
    }
}

int main()
{
    int num;

    printf("\nDigite um numero para sequencia de Padovan: ");
    scanf("%d", &num);

    printf("\nO valor retornado da sequencia: %d\n", padovan(num));

    return 0;
}