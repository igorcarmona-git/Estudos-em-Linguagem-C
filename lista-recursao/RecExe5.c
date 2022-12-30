// 5) Crie uma função recursiva que receba um número inteiro positivo N e calcule o
// somatório dos números de 1 a N.

// 0+0=0 
// 5= 5x5

#include <stdio.h>

int somanum(int num){
    if(num==0)
        return 0;
    else
        return num + somanum(num-1);
}

int main(){
    int num;

    printf("\nDigite um numero inteiro positivo: \n");
    scanf("%d", &num);

    printf("O somatorio dos numeros de 1 a %d -->Resultado: %d", num, somanum(num));

return 0;
}