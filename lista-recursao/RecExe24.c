// 24) Os números de Pell são definidos pela seguinte recursão
// Alguns números desta sequência são: 0, 1, 2, 5, 12, 29, 70, 169, 408, 985...
// Faça uma função recursiva que receba um número N e retorne o N-ésimo número de
// Pell.

#include <stdio.h>

int pell(int num)
{
    if (num == 0)
        return 0;

    if (num == 1)
        return 1;

    if (num > 2)
    {
        return 2 * pell(num - 1) + pell(num - 2);
    }
}

int main()
{
    int num;

    printf("\nDigite um numero para sequencia de Pell: ");
    scanf("%d", &num);

    printf("\nO valor retornado da sequencia: %d\n", pell(num));

    return 0;
}