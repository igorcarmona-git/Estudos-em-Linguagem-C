// 17) O fatorial quádruplo de um número N é dado por (2n)!/n!
// Faça uma função recursiva que receba um número inteiro positivo N e retorne o
// fatorial quádruplo desse número.

// 3! = 1x2x3 1x2x3 1x2x3 1x2x3

#include <stdio.h>

int recFatorial(int num)
{
    if (num == 1 || num == 0)
        return 1;

    else
        return num * recFatorial(num - 1);
}

int quadruplo(int num)
{
    return (recFatorial(2 * num) / recFatorial(num));
}

int main()
{
    int num;

    printf("\nDigite um numero para o calculo de fatorial quadruplo: ");
    scanf("%d", &num);

    printf("\nO fatorial quadruplo de %d --> Resultado: %d\n\n", num, quadruplo(num));

    return 0;
}