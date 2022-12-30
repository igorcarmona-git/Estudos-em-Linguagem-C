#include <stdio.h>

void main (){
    float a,b,c,d,e,f,valorX,valorY;

    printf("Digite o valor para a variavel A: \n");
    scanf("%f",&a);

    printf("Digite o valor para a variavel B: \n");
    scanf("%f",&b);

    printf("Digite o valor para a variavel C: \n");
    scanf("%f",&c);

    printf("Digite o valor para a variavel D: \n");
    scanf("%f",&d);

    printf("Digite o valor para a variavel E: \n");
    scanf("%f",&e);

    printf("Digite o valor para a variavel F: \n");
    scanf("%f",&f);

    valorX=((c*e)-(b*f))/((a*e)-(b*d));
    valorY=((a*f)-(c*d))/((a*e)-(b*d));

    printf("O valor de X eh: %2.f \n",valorX);
    printf("O valor de Y eh: %2.f \n",valorY);


}
