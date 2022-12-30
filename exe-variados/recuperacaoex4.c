#include <stdio.h>

// 4. (2,0 pts) Supondo que a população de uma cidade A seja da ordem de 100.000
// habitantes com uma taxa anual de crescimento de 3,1% ao ano e que a população de uma cidade
// B seja de 210.000 habitantes com uma taxa anual de crescimento de 1,5 %, escreva um algoritmo
// que calcule e escreva quantos anos serão necessários para que a população da cidade A ultrapasse
// a da cidade B, mantidas as taxas anuais de crescimento.

void main()
{
    int habA = 100000, habB = 240000;
    int anos = 0;

    for (habA = 0; habA < habB; anos++)
    {
        habA = habA + (habA / 100) * 3.1;
        habB = habB + (habB / 100) * 1.5;
    }

    printf("\nQuantidade de anos necessarios sera de: \n%d\n", anos);
    printf("\n");
}