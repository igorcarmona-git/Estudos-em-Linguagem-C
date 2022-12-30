#include <stdio.h>

//Escreva um programa que imprime os N primeiros ímpares. Exemplo:
//Quantos ímpares deseja?: 11
//1 3 5 7 9 11 13 15 17 19 21

int main()
{
    int n;
    int numero = 0;

    printf("Quantos impares deseja?: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", numero * 2 + 1);
        numero++;
    }
    return 0;
}