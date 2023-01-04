// Struct | retorno da função

#include <stdio.h>

Pessoa SetPessoa(int i, float p, float a);
void imprimePessoa(Pessoa x);

typedef struct{
    float peso;
    int idade;
    float altura;
} Pessoa;

int main(){
    Pessoa Joao;
    Joao = SetPessoa(15, 60.5, 1.75);

    imprimePessoa(Joao);
}

Pessoa SetPessoa(int i, float p, float a){
    Pessoa P;

    P.idade = i;
    P.peso = p;
    P.altura = a;

    return P;
}

void imprimePessoa(Pessoa x){
    printf("Pessoa com peso %0.2f, idade %d, altura %0.2f.", x.peso,x.idade,x.altura);
}
