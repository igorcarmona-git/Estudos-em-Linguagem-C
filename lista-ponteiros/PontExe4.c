// Exercício 4: O exercício 4 mostra um exemplo de função que retorna um ponteiro. A função
// achaSobrenome retorna o ponteiro pnome. O que você acha que o programa imprime?

#include <stdio.h>

char *acheSobrenome(char nome[])
{
    char *pnome;
    int i = 0;

    while (nome[i] != ' ')
    {
        i++;
    }
    i++;

    pnome = &nome[i];

    return pnome;
}

int main(void)
{
    char nomeCompleto[80];
    char *p;

    puts("Entre com o seu nome e um sobrenome. ");
    gets(nomeCompleto);
    p = acheSobrenome(nomeCompleto);
    puts(p);

    return 0;
}
// Está imprimindo o meu sobrenome a partir do espaço, tudo o que é escrito depois de colocar o espaço (depois que encontra o bloco nulo), ele imprime.