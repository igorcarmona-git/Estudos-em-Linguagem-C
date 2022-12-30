// Exercício 2: Objetivo: Manipular variáveis usando ponteiros para variáveis previamente
// declaradas.
// Considere o programa 2. Procure entender o que será impresso. Procure entender a diferença na
// notação de ponteiros em p2 = &j e *p2 = temp

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 10, j = 20;
    int temp;
    int *p1, *p2;

    p1 = &i; /* p1 recebe endereco de i */
    p2 = &j; /* p2 recebe endereco de j */

    temp = *p1; /* conteudo apontado por p1 para temp */
    *p1 = *p2;  /* conteudo apontado por p2 para o apontado p1 */
    *p2 = temp; /* conteudo apontado por p1 para p2 */

    /* O que sera impresso ???? */

    // resposta: Foi criado as variáveis ponteiros *p1 e *p2 para pegar os endereços das variáveis i e j, depois foi realizada uma troca de valores
    // do conteúdo dentro dos ponteiros por meio da variável temp.
    // sendo assim, impresso: 20 e 10

    printf("%d %d \n", i, j);

    return 0;
}
