#include <stdio.h>

int main (){
    int A, B, C, l,s,d;

    printf("Escreva 3 numeros: \n");
    scanf("%i", &A);
    scanf("%i", &B);
    scanf("%i", &C);

    if ( A >= 0 & B >= 0 & C >= 0) {
        printf ("Positivo \n");
    }else {
        printf ("Negativo \n");
    };

    l = pow(A + B, 2);

    s = pow(B + C, 2);

    d = (l+s)/2;

     printf("O resultado da expressão é: %i \n", d);

}
