#include <stdio.h>

void main(){
    int anos,meses,dias,totaldias,anostotal,mesestotal;

    printf("Digite quantos dias voce ja viveu: \n");
    scanf("%d",&totaldias);

    mesestotal=(totaldias/30);

    printf("Voce tem %d de meses.\n",mesestotal);

    anostotal= (mesestotal/12);

    printf("Voce tem %d de anos.\n",anostotal);
    printf("fim do programa.\n");

}
