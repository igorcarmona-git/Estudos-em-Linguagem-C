#include <stdio.h>

// o comando typedef é usado para criar sinônimos ou “alias” para tipos de dados existentes na prática estamos renomeando um tipo de dados,
// usa-se typedef para redefinir structs a fim de tornar os nomes mais curtos, representando estrutura apenas pelo sinônimo,
// o comando typedef não cria um novo tipo, apenas permite que um tipo existente seja denominado de uma forma diferente


typedef struct Pessoa{
    char nome[15];
    float peso;
    int idade;
    float altura;
} Igor;

int main(){
    Igor p[6];

    printf("Digite os dados da pessoa. \n");
    printf("Nome: ");
    scanf("%s", &p[1].nome);

    printf("Peso: ");
    scanf("%f", &p[1].peso);

    printf("Idade: ");
    scanf("%d", &p[1].idade);

    printf("Altura: ");
    scanf("%f", &p[1].altura);

    printf("Pessoa %s com peso %0.2f, idade %d, altura %0.2f.", p[1].nome, p[1].peso, p[1].idade, p[1].altura);

    return 0;
}
