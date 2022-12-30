// 6)Crie um programa em C, que contenha uma função recursiva que receba dois
// inteiros positivos k e n e calcule k^n
// . Utilize apenas multiplicações. O programa principal
// deve solicitar ao usuário os valores de k e n e imprimir o resultado da chamada da
// função.

#include <stdio.h>

int potencia(int base, int elevado)
{
    if (elevado == 0)
        return 1;

    else
        return base * potencia(base, elevado - 1);
}

int main()
{
    int K, N;

    printf("\nDigite um numero da base positivo: \n");
    scanf("%d", &K);

    printf("\nDigite o numero do expoente positivo: \n");
    scanf("%d", &N);

    printf("O valor de %d elevado a %d: Resultado --> %d\n", K, N, potencia(K, N));

    return 0;
}