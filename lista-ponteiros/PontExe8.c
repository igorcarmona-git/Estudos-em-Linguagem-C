// Exercício 8: Modifique o programa anterior para colocar o vetor em ordem crescente.

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int i, n, *pvetor, aux;

    /* Define um valor para n , scanf ou n = */
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    /* aloca espaco na memoria */
    pvetor = (int *)malloc(n * sizeof(int));
    if (!pvetor)
    {
        puts("Sem memória.");
        return 1;
    }

    /* aqui uso pvetor , vamos ler um vetor */
    for (i = 0; i < n; i++)
    {
        scanf("%d", pvetor + i);
    }

    for (int count = 1; count < n; count++)
    {
        for (int pos = 0; pos < n - 1; pos++)
        {

            if (pvetor[pos] > pvetor[pos + 1])
            {
                aux = pvetor[pos];
                pvetor[pos] = pvetor[pos + 1];
                pvetor[pos + 1] = aux;
            }
        }
    }

    printf("\nVetor em ordem crescente: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", pvetor[i]);
    }

    /* aqui nao preciso mais de pvetor */
    free(pvetor);

    return 0;
}