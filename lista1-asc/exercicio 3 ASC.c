#include <stdio.h>

void main(){
    int anos,meses,dias,resdias;

    printf("Digite a sua idade: \n");
    scanf("%d", &anos);

resdias=anos*365;

    printf("Digite quantos meses desde o seu aniversario: \n");
    scanf("%d", &meses);

resdias=resdias+meses*30;

    printf("Digite quantos dias se passaram do mes atual ate a data de hoje: \n");
    scanf("%d", &dias);

resdias=resdias+dias;

    printf("O valor total de dias que voce viveu e de: %d \n",resdias);
    printf("fim do programa.\n");
}
