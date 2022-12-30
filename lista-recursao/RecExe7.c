// 7) Crie um programa em C que receba um vetor de números reais com 100 elementos.
// Escreva uma função recursiva que inverta ordem dos elementos presentes no vetor.

#include <stdio.h>

float inverta(float *v, int tam)
{
    if (v[0] < tam)
    {
        return inverta();
    }
}

int main()
{
    float v[100];
    float tam;

    printf("\nOs elementos invertidos do vetor: %f ", inverta(v, tam));

    return 0;
}