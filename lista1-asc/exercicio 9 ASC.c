#include <stdio.h>

void main(){
    float mediatotal,nota1,nota2,nota3;

    printf("Digite a sua primeira nota: \n");
    scanf("%f",&nota1);

    printf("Digite a sua segunda nota: \n");
    scanf("%f",&nota2);

    printf("Digite a sua terceira nota: \n");
    scanf("%f",&nota3);

    mediatotal= (nota1+nota2+nota3)/3;

    if(mediatotal >= 6){
        printf("Aprovado. \n");
    }
        else printf("Reprovado. \n");

}
