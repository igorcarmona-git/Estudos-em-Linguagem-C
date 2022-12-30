#include <stdio.h>

//Crie uma variação do programa anterior de forma que ele imprima as linhas em contagem
//decrescente. Exemplo:
//Informe o número de linhas: 10
//Linha 10
//Linha 9
//Linha 8

//Linha 1

int main()
{
    int n;
    printf("Informe o numero de linhas: \n");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        printf("Linha: %d \n", i);
    }
    return 0;
}