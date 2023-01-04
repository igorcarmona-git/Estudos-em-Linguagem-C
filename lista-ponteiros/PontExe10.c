#include <stdio.h>

void testaPonteiro(int *pv2);

int main(void)
{
    int v = 5;
    int *pv;

    pv = &v;

    printf("v vale %d e pv vale %d \n",v,*pv);
    printf("Endereco de v %p para o qual pv aponta %p\n",&v,pv);

    testaPonteiro(pv);

    printf("v mudou? %d", v);  // Valor não altera na main, porque foi alterado no endereço;
    return(0);
}

void testaPonteiro(int *pv2){
    printf("Endereco para o qual pv2 aponta %p\n",pv2);
    *pv2=*pv2+10;  //Valor é 15.
}