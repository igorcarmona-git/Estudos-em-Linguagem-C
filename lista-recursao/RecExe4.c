// 4) Faça uma função recursiva que permita somar os elementos de um vetor de
// inteiros.

#include <stdio.h>

int somavet(int vetor[], int tamanho){
    if(tamanho == 0)   
        return 0;
    else   
        return vetor[tamanho-1] + somavet(vetor, tamanho-1);
}

int main(){
    int vetor[4]= {2,4,6,8};

    printf("\nA soma dos elementos: %d\n\n", somavet(vetor, 4));

    return 0;
}