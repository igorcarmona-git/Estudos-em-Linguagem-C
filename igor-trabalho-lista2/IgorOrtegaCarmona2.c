#include <stdio.h>

// 2-Faça uma função que recebe um vetor X(20) de reais , por parâmetro, e retorna a
// soma dos elementos de X.

float somavetorex2(float *vetor)
{
    float resultado = 0;
    for (int i = 0; i < 20; i++)
    {
        resultado = resultado + vetor[i];
    }
    return resultado;
}

int ex2()
{
    float vetor[20] = {2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5, 2.5};
    float soma;

    soma = somavetorex2(vetor);

    printf("\n");
    printf("A soma dos elementos eh: \n|%2.f| \n", soma);
    printf("\n");

    return 0;
}

// 3-Faça uma função que gera os 10 primeiros primos acima de 100 e retorna-os em
// um vetor X(10), por parâmetro.

int primosex3(int n)
{
    int x[10];
    int prime = 1;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
        }
    }
    if (prime == 1)
    {
        printf("| %d |\t", n);
    }
}

int ex3()
{
    printf("\nOs 10 primeiros numeros primos acima de 100 sao: \n");

    for (int i = 100; i < 150; i++)
    {
        primosex3(i);
    }

    return 0;
}

//6-Faça uma função que receba, por parâmetro, duas matrizes A(4,4) e B(4,4) e
//retorna uma matriz C, também por parâmetro, que seja a soma de M com N.

int somamatrizex6(int A[4][4], int B[4][4])
{
    int C[4][4];

    for (int L = 0; L < 4; L++)
    {
        for (int c = 0; c < 4; c++)
        {
            C[L][c] = A[L][c] + B[L][c];
        }
    }
    printf("\nA soma das matrizes de A e B eh: \n");

    for (int m = 0; m < 4; m++)
    {
        for (int n = 0; n < 4; n++)
        {
            printf("| %d | \t", C[m][n]);
        }
        printf("\n");
    }
    printf("\n");
    return C;
}

int ex6()
{
    int A[4][4] = {{1, 2, 3, 4},
                   {1, 2, 3, 4},
                   {1, 2, 3, 4},
                   {1, 2, 3, 4}};

    int B[4][4] = {{1, 2, 3, 4},
                   {1, 2, 3, 4},
                   {1, 2, 3, 4},
                   {1, 2, 3, 4}};

    somamatrizex6(A, B);

    return 0;
}

// 1-Faça uma função que recebe um vetor X de 30 elementos inteiros, por parâmetro,
// e retorna, também por parâmetro, dois vetores A e B. O vetor A deve conter os
// elementos pares de X e o vetor B, os elementos ímpares.

int expressaoex1(int *vetorpar, int *vetorimpar, int ipar, int iimpar)
{
    printf("\nOs numeros impares!\n");

    for (int j = 0; j < iimpar; j++)
    {
        printf("| %d |  ", *(vetorimpar + j));
    }

    printf("\n");
    printf("\n");

    printf("Os numeros pares!\n");

    for (int i = 0; i < ipar; i++)
    {
        printf("| %d |  ", *(vetorpar + i));
    }
}
int ex1()
{
    int vetor[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    int vetorpar[30], vetorimpar[30];
    int npar = 0;
    int nimpar = 0;

    for (int i = 0; i < 30; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            vetorpar[npar] = vetor[i];
            npar++;
        }
        else
        {
            vetorimpar[nimpar] = vetor[i];
            nimpar++;
        }
    }

    expressaoex1(vetorpar, vetorimpar, npar, nimpar);
    return 0;
}

// 5-Faça uma função que receba, por parâmetro, duas matrizes A(4,6) e B(6,4) e
// retorna uma matriz C, também por parâmetro, que seja o produtoex5 matricial de M por N.

int produtoex5(int A[4][6], int B[6][4])
{
    int C[4][4];
    int reset;
    int L, c, pmatriz;

    for (L = 0; L < 4; L++)
    {
        for (c = 0; c < 4; c++)
        {
            reset = 0;
            for (pmatriz = 0; pmatriz < 6; pmatriz++)
            {
                reset = reset + (A[L][pmatriz] * B[pmatriz][c]);
            }
            C[L][c] = reset;
        }
    }

    printf("\nO produto matricial das matrizes A e B eh: \n");

    for (L = 0; L < 4; L++)
    {
        for (c = 0; c < 4; c++)
        {
            printf("| %d |\t", C[L][c]);
        }
        printf("\n");
    }

    printf("\n");
}

int ex5()
{
    int A[4][6] = {{1, 2, 3, 4, 5, 6},
                   {1, 2, 3, 4, 5, 6},
                   {1, 2, 3, 4, 5, 6},
                   {1, 2, 3, 4, 5, 6}};

    int B[6][4] = {{1, 2, 3, 4},
                   {1, 2, 3, 4},
                   {1, 2, 3, 4},
                   {1, 2, 3, 4},
                   {1, 2, 3, 4},
                   {1, 2, 3, 4}};

    produtoex5(A, B);
    return 0;
}

// 4-Faça uma função que recebe, por parâmetro, uma matriz A(6,6) e retorna a soma
// dos elementos da sua diagonal principal e da sua diagonal secundária.

int somaelementosex4(int A[6][6])
{
    int res = 0;
    int dp = 0;
    int ds = 0;

    printf("\n Os valores da Diagonal Principal eh: \n ");

    for (int i = 0; i < 6; i++)
    {
        dp = dp + A[i][i];
        printf("| %d | \t", A[i][i]);
    }

    printf("\n");
    printf("\n Os valores da Diagonal secundaria eh: \n");

    for (int L = 0; L < 6; L++)
    {
        for (int C = 0; C < 6; C++)
        {
            if (L + C == 5)
            {
                ds = ds + A[L][C];
                printf("| %d | \t", A[L][C]);
            }
        }
    }

    res = dp + ds;

    printf("\n");
    printf("\n A soma dos elementos da diagonal principal com a secundaria eh: %d \n", res);
    printf("\n");
}

int ex4()
{
    int A[6][6] = {{1, 2, 3, 4, 5, 6},
                   {1, 2, 3, 4, 5, 6},
                   {1, 2, 3, 4, 5, 6},
                   {1, 2, 3, 4, 5, 6},
                   {1, 2, 3, 4, 5, 6},
                   {1, 2, 3, 4, 5, 6}};

    somaelementosex4(A);
    return 0;
}
