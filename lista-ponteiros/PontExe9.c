// Exercício 9: Escreva um programa que descubra qual é o maior segmento de memória que é
// possível reservar neste computador.

// Dica: Faça um laço que tente reservar espaço, se conseguir libere (usar free()) este espaço e
// tente reservar um espaço ainda maior. Vai assim até verificar que o programa não consegue. Ir
// aumentando de 1 byte em 1 byte vai fazer o programa demorar muito.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor = 10, *memoria;

    for (int i = 0; i < valor; i++)
    {
        *memoria = (int *)malloc(valor * sizeof(int));

        if (*memoria == 1)
        {
            valor = 10 * 10;
            printf("\nVoce ainda tem memoria");

            if (*memoria == NULL)
            {
                printf("Voce nao tem memoria");
            }
        }
    }
    printf("O tamanho maximo: %d", *memoria);

    free(*memoria);

    return 0;
}
///////////////////////////// Eu não consegui fazer o código professor. Não sei se a linha de raciocínio está certa.