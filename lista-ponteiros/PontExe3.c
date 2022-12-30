#include <stdio.h>
#include <stdlib.h>

//     4       2
//     2       4
//      &px     &py         Troca ( 4, 2 )
void Troca(int *a, int *b)
{
    int temp;
    temp = *a; // temp = 2
    *a = *b;   // *a = 4
    *b = temp; //
} /* Fim de Troca */

int main(void)
{
    int x, y;
    int *px, *py;

    /* Nao se usa isto normalmente . Isto é um exercício para aprendermos
    ponteiros */

    px = &x; //#100
    py = &y; //#104

    /*
     * Como seria o comando scanf com px e py ao inves x e y ?
     * Dica : lembre - se que era scanf ("% d % d " , &x , & y );
     * Agora olhe os dois comandos acima e verifique quem e igual
     * a & x e & y .
     */

    scanf("%d %d", px, py);

    /* Como seria Troca com px e py ? */
    Troca(px, py);
    // Troca ( 4, 2 )

    /* Como seria printf com px e py ? */
    printf(" Troquei ----> %d %d\n", *px, *py);
    return 0;
}