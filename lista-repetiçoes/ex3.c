//Escreva um programa que imprime a tabuada de um número informado. Exemplo:
//Informe o número: 7
//7 x 1 = 7
//7 x 2 = 14
//7 x 3 = 21

//7 x 10 = 70

#include <stdio.h>

int main()
{
    int n;
    int res;

    printf("Informe um numero: \n");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        res = n * i;
        printf("%d x %d = %d \n", n, i, res);
    }
    return 0;
}
