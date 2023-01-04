#include<stdio.h>

void imprimeVetorP(char *ptr);

int main() 
{
    int i;
    char vet[5] = {'a', 'b', 'c', 'd', 'e'};
    char *ptr;

    ptr = &vet[0]; // ponteiro ptr aponta para o primeiro elemento do vetor

    printf("posicao de vet: %p\n", &vet);
    printf("ptr vale: %p\n", ptr);
    printf("ptr aponta para valor: %c\n", *ptr);

    imprimeVetorP(ptr);
}

void imprimeVetorP(char *ptr)
{
    printf("\n\nImprimindo de dentro da funcao \n\n");

    for (int i=0; i < 5; i++)
    {
        printf("ptr = %c\n", *ptr); //imprimindo do ponteiro
        ptr++;
    }
}
