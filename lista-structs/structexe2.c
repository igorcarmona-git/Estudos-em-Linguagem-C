// Structs passagem por parâmetro

#include <stdio.h>

void imprimePessoa(struct Pessoa x);

typedef struct {
    float peso;
    int idade;
    float altura;
} Pessoa;

int main(){
    Pessoa p[6];
    int x;

    printf("Digite os dados da pessoa. \n");

    printf("Peso: ");
    scanf("%f", &p[1].peso);

    printf("Idade: ");
    scanf("%d", &p[1].idade);
    
    printf("Altura: ");
    scanf("%f", &p[1].altura);

    imprimePessoa(p[1]);

    return 0;
}

void imprimePessoa(Pessoa x){
    printf("Pessoa com peso %0.2f, idade %d, altura %0.2f.", x.peso, x.idade, x.altura);
}