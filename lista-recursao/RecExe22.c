// 22) Os números tetranacci iniciam com quatro termos pré-determinados e a partir daí
// todos os demais números são obtidos pela soma dos quatro números anteriores. Os
// primeiros números tetranacci são: 0, 0, 0, 1, 1, 2, 4, 8, 15, 29, 56, 108, 208...

// 0+0+0+1=1 // 0+0+1+1=2 // 0+1+1+2=4 // 1+1+2+4=8 // 1+2+4+8=15

// Faça uma função recursiva que receba um número N e retorne o N-ésimo termo da
// sequência de tetranacci.

#include <stdio.h>

int tetra(int num)
{
    if (num <= 0)
        return 0;

    if (num == 1)
        return 1;

    return (tetra(num - 1) + tetra(num - 2) + tetra(num - 3) + tetra(num - 4));
}

int main()
{
    int num;

    printf("\nDigite um numero para tetranacci: ");
    scanf("%d", &num);

    printf("\nO valor retornado da sequencia: %d\n", tetra(num));

    return 0;
}