#include <stdio.h>

//5. (2,0 pts) Faça um programa que receba um número N inteiro fornecido pelo usuário e
//retorne quais números são divisores de N

void main()
{
    int usuario = 0;

    printf("Digite um numero: \n");
    scanf("%d", &usuario);

    int div_N[usuario];

    printf("\n");

    for (int i = 1; i <= usuario; i++)
    {
        if (usuario % i == 0)
            div_N[i] = i;

        else
            div_N[i] = 0;
    }

    for (int a = 0; a <= usuario; a++)
    {
        if (div_N[a] != 0)
            printf("%d \n", div_N[a]);
    }
}
