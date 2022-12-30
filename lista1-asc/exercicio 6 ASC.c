#include <stdio.h>

void main(){
    float dE,tempoS,tempoH,tempoM,resto,resto1,resto2;

    printf("Digite o tempo de duracao do evento em segundos da sua empresa: \n");
    scanf("%f",&dE);

    tempoH=(dE/3600);

    resto= (int)dE%3600;

    printf("O tempo de duracao em horas eh de: %2.f \n",tempoH);

    tempoM=(tempoH/60);

    resto2= (int)tempoH%60;
    resto1=resto+resto2;

    printf("O tempo de duracao em minutos eh de: %2.f \n",tempoM);

    printf("O tempo em segundos eh de: %2.f \n",resto1);

    printf("Fim do programa.\n");
}
