// 15) Faça uma função recursiva que receba um número inteiro positivo par N e imprima
// todos os números pares de 0 até N em ordem decrescente.

#include <stdio.h>

int ordem(num)
{
    if (num == 0)
    {
        return 0;
    }
    printf("%d ", num);

    ordem(num - 2);

    return 0;
}

int main()
{
    int num;

    printf("\nDigite um numero inteiro positivo que seja par: \n");
    scanf("%d", &num);

    printf("\nOs numeros inteiros pares de 0 ate %d:\n", num);

    ordem(num);

    printf("0");
}