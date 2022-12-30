// 11) A multiplicação de dois números inteiros pode ser feita através de somas
// sucessivas. Proponha um algoritmo recursivo Multip_Rec(n1,n2) que calcule a
// multiplicação de dois inteiros.

// 5x5 = 5+5+5+5+5 = 25
// 5x0 = 0+0+0+0+0 = 0
// 5x1 = 1+1+1+1+1 = 5

#include <stdio.h>

int multS(int n1_vezes, int n2_valor)
{
    if (n1_vezes == 0 || n2_valor == 0)
    {
        return 0;
    }
    else if (n2_valor == 1)
    {
        return (n2_valor);
    }
    else
    {
        return (n2_valor + multS(n1_vezes - 1, n2_valor));
    }
}

int main()
{
    int n1_vezes, n2_valor;
    int res;

    printf("\nDigite dois numeros inteiros: \n");
    scanf("%d %d", &n1_vezes, &n2_valor);

    res = multS(n1_vezes, n2_valor);

    printf("O produto: %d", res);

    return 0;
}