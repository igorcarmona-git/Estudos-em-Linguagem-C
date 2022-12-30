#include <stdio.h>

void main()
{
    int n1 = 0;

    for (int i = 0; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            n1 += i;
            printf("%d ", i);
        }
    }
    printf("Os multiplos de 3 sao: %d", n1);
}
void ex()
{
}
