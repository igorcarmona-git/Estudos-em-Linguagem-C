#include <stdio.h>
#include <stdlib.h>

int main()
{
    float resultado, quantia, tributo, salario, temp;

    printf("\nDigite o valor do seu sálario: \n");
    scanf("%f", &quantia);

    temp = quantia;
    salario = temp;

    if (quantia <= 1903.98)
    {
        printf("\nNão há tributação de IR\n");
    }

    else if (quantia >= 1903.99 && quantia <= 2826.65)
    {
        tributo = (quantia * 7.5) / 100;
    }

    else if (quantia >= 2826.66 && quantia <= 3751.05)
    {
        tributo = (quantia * 15) / 100;
    }

    else if (quantia >= 3751.06 && quantia <= 4664.68)
    {
        tributo = (quantia * 22.5) / 100;
    }

    else
    {
        tributo = (quantia * 27.5) / 100;
    }

    resultado = salario - tributo;

    printf("\nO valor do tributo do seu sálario é de: %2.f\n", tributo);

    printf("\nO seu sálario será de: %2.f \n", resultado);

    return 0;
}