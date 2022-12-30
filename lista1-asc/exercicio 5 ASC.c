#include <stdio.h>

void main(){
    float nota1,nota2,nota3,totalnotas,mediatotal,peso1,peso2;

    printf("Digite sua primeira nota: \n");
    scanf("%f",&nota1);

    printf("Digite a sua segunda nota: \n");
    scanf("%f",&nota2);

    printf("Digite a sua terceira nota: \n");
    scanf("%f",&nota3);

    mediatotal= (nota1+nota2+nota3)/3;
    peso1= mediatotal*2.3;
    peso2= peso1*5;
    totalnotas=peso2;

    printf("O valor total da sua nota eh: %.f \n",totalnotas);
    printf("Fim do programa.\n");

}
