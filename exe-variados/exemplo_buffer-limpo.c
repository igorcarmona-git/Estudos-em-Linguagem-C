#include <stdio.h>
#include <stdlib.h>

int main(){
    //limpeza de buffer
    char ch[5];
    int i;

    for(i = 0; i < 5; i++){
        printf("Digite o %do caracter: ", i+1);
        scanf("%s", &ch);
        setbuf(stdin, NULL);
    }
    
    system("pause");
    return 0;
}