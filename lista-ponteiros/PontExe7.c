// Exercício 7: Modifique o programa anterior para descobrir quantos números são maiores do
// que a média.

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int i, n, *pvetor;
    float media;
    int count = 0;

    /* Define um valor para n ,scanf ou n = */
    scanf("%d", &n);

    /* aloca espaco na memoria */
    pvetor = (int *)malloc(n * sizeof(int));
    if (!pvetor)

    {
        puts("Sem memória . ");
        return 1;
    }

    /* aqui uso pvetor , vamos ler um vetor */
    for (i = 0; i < n; i++)
    {
        scanf("%d", pvetor + i);
    }

    /* faco alguma coisa */
    media = 0.0;

    for (i = 0; i < n; i++)
    {
        media = media + *(pvetor + i);
    }
    media = media / n;

    printf("%f \n", media);

    for (i = 0; i < n; i++)
    {
        if (pvetor[i] > media)
        {
            count++;
        }
    }

    printf("\nQuantidade de numeros maiores que a media: %d", count);

    /* aqui nao preciso mais de pvetor */
    free(pvetor);

    return 0;
}