#include <stdio.h>

void troca(int *v, int i, int j)
{
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}

int selec_aux(int *v, int begin, int end)
{
    int pp = begin;

    for (int j = begin + 1; j <= end; j++)
    {
        if (v[j] > v[pp])
        {
            pp = j;
        }
    }

    return pp;
}

int selectionsort(int *v, int num)
{
    int pp;

    for (int i = num - 1; i > 0; i--)
    {
        pp = selec_aux(v, 0, i);
        troca(v, i, pp);
    }

    return 0;
}

int main()
{
    int num = 10;

    int *v = (int *)malloc(sizeof(int) * num);

    printf("Digite 10 numeros inteiros: \n");

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &v[i]);
    }

    selectionsort(v, num);
    printf("\n");

    printf("\nA ordem\n");

    for (int i = 0; i < num; i++)
    {
        printf("%d ", v[i]);
    }

    return 0;
}