#include <stdio.h>

void main()
{
    int n;
    int m1 = 0;
    int m2 = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o 10 numeros inteiros: ");
        scanf("%d", &n);

        if (n > m1)
        {
            if (m1 > m2)
            {
                m2 = m1;
            }

            m1 = n;
        }

        if (n > m2 && n != m1)
        {
            m2 = n;
        }
    }

    printf("O segundo maior numero e: %d\n", m2);
}
