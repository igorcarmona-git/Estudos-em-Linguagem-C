#include <stdio.h>

void main(){
    float cF,cFTotal;

    printf("Digite o custo do seu carro novo: \n");
    scanf("%f",&cF);

    cFTotal=(cF + 28/100)+(cF + 45/100);

    printf("O custo de fabrica total do carro eh de: %2.f \n",cFTotal);
    printf("Fim do programa");

}
