#include <stdio.h>

int alunonota()
{
    // Algoritmo para receber a nota de um aluno e apresentar se o mesmo foi aprovado

    char aluno[20];
    float nota = 0;

    printf("\n| Qual o seu nome? \n");
    gets(aluno);
    printf("\n| O nome do aluno: %s\n", aluno);

    printf("\n-----------------------------------------\n");

    printf("\n| Digite a nota do aluno entre 0 e 100: ");
    scanf("%f", &nota);
    printf("\n |Nota: %2.f |\n", nota);

    if (nota < 60)
        printf("\n| O aluno foi reprovado! \n");
    else if (nota == 60)
        printf("\n| O aluno foi aprovado com nota mínima de: 60!\n");
    else
        printf("\n| O aluno foi reprovado!");

    return 0;
}
int pgt()
{
    // Algoritmo que receba o valor do pagamento de um funcionário e escreva se o valor é maior ou menor do que 3 sálarios mínimos (R$1212.00)

    float pgt = 0, salario = 1212.00, valortotal;
    char fnome[20];

    printf("\n| Digite o nome do funcionário: ");
    gets(fnome);
    printf("\n| Nome do funcionário: %s\n", fnome);

    printf("\n--------------------------------------------\n");

    printf("\n| Digite o valor do pagamento do funcionário %s", fnome);
    scanf("%f", &pgt);

    valortotal = (salario * 3);

    if (pgt < salario)
        printf("\n | O valor do pagamento é menor do que 3 sálarios mínimos. \n");
    else if (pgt == salario)
        printf("\n| O pagamento é igual a 3 sálarios mínimos. \n");
    else
        printf("\n| O aluno foi reprovado.\n");

    return 0;
}
int main()
{
    // Algoritmo que receba o valor do pagamento de um funcionário e escreva em qual enquadramento do imposto de renda o sálario dele se encaixa

    float pgt = 0;
    char fnome[20];

    printf("\n| Escreva o nome do funcionario: ");
    gets(fnome);
    printf("\n| Nome do funcionario: %s\n", fnome);

    printf("\n-------------------------------------------\n");

    printf("\n|Digite o valor do pagamento do funcionario: ");
    scanf("%f", &pgt);

    if (pgt < 0)
    {
        printf("\n| Voce tem certeza que digitou corretamente? \n");
        printf("| Voce nao pode ter pagamento com valor negativo. Digite um valor positivo. |\n");
        printf("\n |---------------- DGITE NOVAMENTE ABAIXO ----------------- | \n");
        printf("Digite o valor do pagamento do funcionario: ");
    }
    scanf("%f", &pgt);
    if (pgt <= -1)
    {
        printf("\n| Voce digitou novamente um valor de pagamento negativo. O programa foi encerrado. \n");
    }
    if (pgt < 1903.98 && pgt > 0)
        printf("\n| FAIXA 1: Voce esta isento de IR.|\n");
    else if (pgt >= 1903.99 && pgt <= 2826.65)
        printf("\n| FAIXA 2: Voce tem 7,5 porcento de IR. |\n");
    else if (pgt >= 2826.66 && pgt <= 3751.05)
        printf("\n| FAIXA 3: Voce tem 15 porcento de IR. |\n");
    else if (pgt >= 3751.06 && pgt <= 4664.68)
        printf("\n| FAIXA 4: Voce tem 22,5 porcento de IR. |\n");
    else
        printf("\n| FAIXA 5: Voce tem 27,5 porcento de IR. |\n");

    printf("\n-------------------------------------------\n");

    return 0;
}