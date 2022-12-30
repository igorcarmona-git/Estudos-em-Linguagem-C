#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define nl 5
#define nc 5

// int somatorio()
// {
//     // SOMATÓRIO DE ARRAY

//     int vet[nl][nc], total = 0, i, j;

//     printf("\nDigite 5 valores: \n");

//     for (i = 0; i < nl; i++)
//     {
//         for (j = 0; j < nc; j++)
//         {
//             scanf("%d", &vet[i]);
//             total += vet[nl][nc];
//         }
//     }
//     printf("\nO valor total: %d", total);

//     return 0;
// }

// int aninhamento_for()
// {
//     // ANINHAMENTO DE REPETIÇÕES (usando for)

//     int i, j;
//     for (i = 1; i < 5; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//             if (i == j)
//                 printf("1 ");
//             else
//                 printf("0 ");
//         }
//     }
//     return 0;
// }

// int aninhamento_while()
// {
//     // ANINHAMENTO DE REPETIÇÕES (usando o while)

//     int i, j;

//     i = 1;
//     while (i < 5)
//     {
//         j = 1;
//         while (j < 5)
//         {
//             if (i == j)
//             {
//                 printf("1 ");
//             }
//             else
//             {
//                 printf("0 ");
//             }
//             j++;
//         }
//         printf("\n");
//         i++;
//     }
//     return 0;
// }

// int maior_elemento()
// {
//     // Maior/menor elemento de um array

//     int i, lista[5] = {3, 8, 15, -4, 9};
//     int maior = lista[0];

//     for (i = 1; i < 5; i++)
//     {
//         if (maior < lista[i])
//             maior = lista[i];
//     }
//     printf("\n Maior = %d\n", maior);

//     return 0;
// }

// int biblioteca_string()
// {
//     // Copia de string para o segundo vetor

//     // char str1[20] = "Hello World";
//     // char str2[20];
//     // int i;

//     // for (i = 0; str1[i] != '\0'; i++)
//     // {
//     //     str2[i] = str1[i];
//     // }
//     // str2[i] = '\0';

//     //                                       Usando a biblioteca <string.h>
//     //                                       strlen Tamanho da String
//     //                                       strcpy Copiar uma string
//     //                                       strcat Concatenar duas strings
//     //                                       strcmp Comparar duas strings

//     // strlen
//     char palavra[20] = "Linguagem C ";
//     int tamanho = strlen(palavra);
//     printf("\nTamanho = %d\n", tamanho);

//     // strcpy
//     char novapalavra[30];
//     strcpy(novapalavra, palavra);
//     printf("\nCopia = %s\n", novapalavra);

//     // strcat
//     char texto[30] = "Teste de linguagem";
//     strcat(palavra, texto);
//     printf("\nPalavra juntada = %s\n", palavra);

//     // strcmp
//     if (strcmp(palavra, texto) == 0)
//         printf("\nStrings Iguais \n");
//     else
//         printf("\nStrings diferentes \n");

//     return 0;
// }

// int strings_inverter()
// {
//     // Invertendo uma string na tela

//     char str[20] = "Linguagem C";
//     int i;

//     for (i = strlen(str) - 1; i >= 0; i--)
//     {
//         printf("\n%c", str[i]);
//     }
//     printf("\n");

//     // Mantém a string original e armazena a invertida no vetor 2.

//     char str1[20] = "Linguagem C";
//     char str2[20];
//     int i, j = 0;

//     for (i = strlen(str1) - 1; i >= 0; i--)
//     {
//         str2[j] = str1[i];
//         j++;
//     }
//     str2[j] = '\0';
//     printf("\nstr2 = %s\n", str2);
//     printf("\nstr1 = %s\n", str1);

//     // iNVERTER STRING SEM CRIAR UM VETOR 2

//     char str[20] = "Linguagem C";
//     char c;
//     int i, tam = strlen(str);

//     for (i = 0; i < tam / 2; i++)
//     {
//         c = str[i];                // Armazena a primeira letra da string
//         str[i] = str[tam - 1 - i]; // Pega a ultima posição da string, e ir decrementando o i para chegar ao meio.
//         str[tam - 1 - i] = c;      // A ultima posição recebe o valor guardado em c.
//     }
//     printf("str = %s\n", str);

//     return 0;
// }

struct pessoa // Geralmente se define uma estrutura fora do escopo main do código, para reutilizar durante todo o programa.
{
    char nome[50], rua[50];
    int idade, numero;
};

int main()
{
    struct pessoa p;
    {
        // Cada campo (variável) da struct pode ser acessada usando o perador "." (ponto)
        p.idade = 31;
        scanf("%d", &p.numero);
        gets(p.nome);
        p.numero = p.numero + p.idade - 100;
    };

    return 0;
}