// 14) Faça uma função recursiva que receba um número inteiro positivo par N e imprima
// todos os números pares de 0 até N em ordem crescente.

#include <stdio.h>

int ordem(num)
{
    if (num == 0)
    {
        return 0;
    }

    ordem(num - 2);

    printf("%d ", num);

    return 0;
}

int main()
{
    int num;

    printf("\nDigite um numero inteiro positivo que seja par: \n");
    scanf("%d", &num);

    printf("\nOs numeros inteiros pares de 0 ate %d:\n", num);
    printf("0 ");

    ordem(num);
}