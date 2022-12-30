#include <stdio.h>

int main()
{
    int num[4], i;

    for (i = 0; i < 4; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("Os valores: ");

    for (int j = 0; j < 4; j++)
    {
        printf("%d ", num[j]);
    }

    return 0;
}