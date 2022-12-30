// 1) Faça uma função recursiva que calcule e retorne o fatorial de um número inteiro N.

// 3! == 3 * 2 * 1
// 1! == 1
// 0! == 1

#include <stdio.h>

int recFatorial(int num)
{
    if (num == 1 || num == 0)
        return 1;

    else
        return num * recFatorial(num - 1);
}

int main()
{
    int num;

    printf("\nDigite um numero para o calculo de fatorial: ");
    scanf("%d", &num);

    printf("\nO fatorial de %d --> Resultado: %d\n\n", num, recFatorial(num));

    return 0;
}