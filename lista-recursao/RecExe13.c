// 13) Faça uma função recursiva que receba um número inteiro positivo N e imprima
// todos os números naturais de 0 até N em ordem decrescente.

#include <stdio.h>

int ordem(num)
{
    if (num == 0)
    {
        return 0;
    }

    printf("%d ", num);
    ordem(num - 1);

    return 0;
}

int main()
{
    int num;

    printf("\nDigite um numero inteiro positivo: \n");
    scanf("%d", &num);

    printf("\nOs numeros naturais de 0 ate %d:\n", num);

    ordem(num);

    printf("0");
}