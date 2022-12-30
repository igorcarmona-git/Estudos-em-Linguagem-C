// 29) Implemente, usando a linguagem C, a função h definida recursivamente por:

// Obs.: Não entendi o enunciado do exercício, aparece uma função para ser implementada, tentei fazer o escopo da função,
//       mas não sei para que serve.

#include <stdio.h>

int func_H(int m, int n)
{
    if (n == 1)
        m = m + 1;

    if (m == 1)
    {
        m = m + 1;
    }
    if (m > 1, n > 1)
    {
        func_H(m, n - 1) + func_H(m - 1, n);
    }
}
int main()
{
    int m = 5, n = 5;

    printf("\nm: %d e n: %d\n", func_H(m, n));

    return 0;
}