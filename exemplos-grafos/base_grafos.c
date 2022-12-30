#include <stdio.h>
#include <limits.h>

int main()
{
    int n = 6;
    int matAdj[][6] = 
    {
        {INT_MAX, 2, 1, INT_MAX, INT_MAX, INT_MAX},
        {INT_MAX, INT_MAX, INT_MAX, 1, 2, INT_MAX},
        {INT_MAX, INT_MAX, INT_MAX, 3, INT_MAX, 5},
        {INT_MAX, INT_MAX, INT_MAX, INT_MAX, 1, 2},
        {INT_MAX, INT_MAX, INT_MAX, 1, INT_MAX, 2},
        {INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX, INT_MAX}
    };

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (matAdj[j][i] != INT_MAX) // Opa, achei um adjacente.
            {
                printf("Os nos %d e %d sao adjacente com valor %d\n", j, i, matAdj[j][i]);
            }
        }
    }
    return 0;
}