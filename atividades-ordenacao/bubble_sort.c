#include <stdio.h>

void troca(int *v, int i, int j)
{
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

void bubbleSort(int *v, int num)
{
    for (int j = num - 1; j > 0; j--)
    {
        for (int i = 0; i < j; i++)
        {
            if (v[i] > v[i + 1])
            {
                troca(v, i, i + 1);
            }
        }
    }
}

int main()
{
    int *v;
    int num = 10;

    v = (int *)malloc(num * sizeof(int));
    
    if (v == NULL)
    {
        printf("ERRO: Sem Memória! \n");
        exit(1); //Termina o programa
    }

    printf("Digite 10 numeros inteiros: \n");

    for (int i = 0; i < num; i++)
    {
        printf("Digite v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    bubbleSort(v, num);

    printf("\nA ordem\n");

    for (int i = 0; i < num; i++)
    {
        printf("%d ", v[i]);
    }

    free (v); //Limpa a memória alocada.

    return 0;
}