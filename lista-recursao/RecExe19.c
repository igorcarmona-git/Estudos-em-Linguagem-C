// 19) O hiperfatorial de um número N, escrito H(n), é definido por
// Faça uma função recursiva que receba um número inteiro positivo N e retorne o
// hiperfatorial desse número.

#include <stdio.h>

int potencia(int K, int N)
{
    if (N == 0)
        return 1;

    else
        return K * potencia(K, N - 1);
}

int hiper(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
        return potencia(num, num) * hiper(num - 1);
}

int main()
{
    int num;

    printf("\nDigite um numero inteiro positivo: ");
    scanf("%d", &num);

    printf("\nO hiperfatorial de %d --> Resultado: %d", num, hiper(num));
}