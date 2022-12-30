#include <stdio.h>

void insertion_aux(int *v, int k)
{
    int num = v[k];
    int i = k - 1;

    while ((i >= 0) && (v[i] > num))
    {
        v[i + 1] = v[i];
        i--;
    }

    v[i + 1] = num;
}

void insertionSort(int *v, int n)
{
    for (int j = 1; j < n; j++)
    {
        insertion_aux(v, j);
    }
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

    insertionSort(v, num);
    printf("\n");

    printf("\nA ordem\n");

    for (int i = 0; i < num; i++)
    {
        printf("%d ", v[i]);
    }

    return 0;
}