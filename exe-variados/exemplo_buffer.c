#include <stdio.h>
#include <stdlib.h>

int main(){
    //Sem limpeza de buffer
    char ch[5];
    int i;

    for(i = 0; i < 5; i++){
        printf("Digite o %do caracter: ", i+1);
        scanf("%c", &ch);
    }
    
    system("pause");
    return 0;
}