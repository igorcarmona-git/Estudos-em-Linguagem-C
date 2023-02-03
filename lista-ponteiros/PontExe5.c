// Exercício 5: Execute o programa 5

// Alocação dinâmica de memória e free para liberação.

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int i, n, *pvetor;
    float media = 0;
    float result = 0;

    /* Define um valor para n , scanf ou n = */
    scanf("%d", &n);

    /* aloca espaco na memoria */
    pvetor = (int *)malloc(n * sizeof(int));

    if (!pvetor){
        puts("Sem memória.");
        return 1;
    }

    /* A PARTIR DE AGORA VOLTAMOS PARA VETORES COMUNS */
    /* aqui uso pvetor , vamos ler um vetor */
    for (i = 0; i < n; i++){
        scanf("%d", &pvetor[i]);
    }

    for (i = 0; i < n; i++){
        (media += pvetor[i]);
    }

    result = media / n;

    printf("%f \n", result);
    /* aqui nao preciso mais de pvetor */

    free(pvetor);
    return 0;
}
