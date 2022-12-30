#include <stdio.h>
#include <math.h>
#include <string.h>

struct pg
{
    int valor, qmeses;
    float convert, jurosmes, porcent, total, vadd;
};

int main()
{
    struct pg p;

    printf("\nDigite um valor: ");
    scanf("%f", &p.valor);

    printf("\nDigite a taxa de juros ao mes: ");
    scanf("%f", &p.convert);

    printf("\nQual e o prazo para pagamento (numero de meses): ");
    scanf("%f", &p.qmeses);

    p.porcent = (p.convert / 100);
    p.jurosmes = (p.valor * p.porcent);
    p.total = p.valor + (p.jurosmes * p.qmeses);

    if (p.qmeses >= 0 && p.qmeses <= 12)
    {
        p.vadd = (p.valor / p.qmeses) + p.jurosmes;
    }
    else
    {
        printf("\n O numero de meses esta incorreto, digite de 0 - 12 meses.");
        printf("Digite o numero de meses corretamente: ");
        scanf("%f", &p.qmeses);
    }

    printf("\nO valor mensal do pagamento eh de: %2.f", p.vadd);
    printf("\nA porcentagem de juros eh de: %2.f", p.jurosmes);
    printf("\nO valor total do pagamento eh de: %2.f\n", p.total);

    return 0;
}