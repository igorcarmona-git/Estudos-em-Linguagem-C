#include <stdio.h>

//Escreva um programa que faz a leitura de um valor N e imprime N linhas de texto exibindo o
//número da linha corrente. Exemplo:
//Informe o número de linhas: 10
//Linha 1
//Linha 2
//Linha 3

//Linha 10
int ex1()
{
    int n;

    printf("Informe o numero de linhas: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Linha: %d \n", i);
    }
    return 0;
}