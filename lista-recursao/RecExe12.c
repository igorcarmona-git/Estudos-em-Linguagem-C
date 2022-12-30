// 12) Faça uma função recursiva que receba um número inteiro positivo N e imprima
// todos os números naturais de 0 até N em ordem crescente.

#include <stdio.h>

int ordem(num)
{
    if (num == 0)
    {
        return 0;
    }

    ordem(num - 1);

    printf("%d ", num);

    return 0;
}

int main()
{
    int num;

    printf("\nDigite um numero inteiro positivo: \n");
    scanf("%d", &num);

    printf("\nOs numeros naturais de 0 ate %d:\n", num);
    printf("0 ");

    ordem(num);
}