#include <stdio.h>

void main(){
    int a, b, c;

    printf("Digite o valor da variavel a: ");
    scanf("%d", &a);

    printf("Digite o valor da variavel b: ");
    scanf("%d", &b);

    printf("Digite o valor da variavel c: ");
    scanf("%d", &c);

    int maior = a;

    if (b > a){
        maior = b;
        if(c>b){
            maior = c;
        }
    }

    if(a==b && b==c){
        printf("Os numeros sao iguais. \n");
    }
    
    printf("%d eh maior",maior);
}
