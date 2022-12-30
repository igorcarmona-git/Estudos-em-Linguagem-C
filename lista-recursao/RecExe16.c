// 16) A função fatorial duplo é definida como o produto de todos os números naturais
// ímpares de 1 até algum número natural ímpar N.
// Assim, o fatorial duplo de 5 é
// 5!! = 1 * 3 * 5 = 15
// Faça uma função recursiva que receba um número inteiro positivo impar N e retorne o
// fatorial duplo desse número.

#include <stdio.h>

int recFatorial(int num)
{

    if (num == 1 || num == 0)
        return 1;

    else
        return num * recFatorial(num - 2);
}

int main()
{
    int num;

    printf("\nDigite um numero impar para o calculo de fatorial duplo: ");
    scanf("%d", &num);

    printf("\nO fatorial duplo de %d --> Resultado: %d\n\n", num, recFatorial(num));

    return 0;
}