// 21) Os números tribonacci são definidos pela seguinte recursão
// Faça uma função recursiva que receba um número N e retorne o N-ésimo termo da
// sequência de tribonacci.

#include <stdio.h>

int tribonacci(int num)
{
    if (num == 0)
    {
        return 0;
    }
    if (num == 1)
    {
        return 0;
    }
    if (num == 2)
    {
        return 1;
    }

    else if (num > 2)

    {
        return tribonacci(num - 1) + tribonacci(num - 2) + tribonacci(num - 3);
    }
}

int main()
{
    int num;

    printf("\nDigite um numero: ");
    scanf("%d", &num);

    printf("\nO n-esimo termo da sequencia de tribonacci eh: %d\n", tribonacci(num));
}