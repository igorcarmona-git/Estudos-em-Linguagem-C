#include <stdio.h>

void ex1()
{
    int a, b, mudanca;
    printf("Digite os valores das variaveis A e B: \n");
    scanf("%d %d", &a, &b);

    mudanca = a;
    a = b;
    b = mudanca;

    printf("O valor da variavel A: %d \n", a);
    printf("O valor da variavel B: %d \n", b);

    printf("\n");
    printf("Fim do programa.");
}
void ex2()
{
    float diametro, pF, volume;

    printf("Digite o valor para o diametro: \n");
    scanf("%f", &diametro);

    printf("Digite o valor da profundidade: \n");
    scanf("%f", &pF);

    volume = 3.14 * ((diametro / 2) * (diametro / 2)) * pF;

    printf("O volume do cilindro e: %.2f em metros cubicos", volume);

    printf("\n");
    printf("Fim do programa.");
}
void ex3()
{
    float salario = 1100, qCasa, kwc100, kw1, pagar, pagar2;

    printf("A quantidade gasta em quilowatts da residencia eh: \n");
    scanf("%f", &qCasa);

    kwc100 = salario / 7;
    kw1 = kwc100 / 100;

    pagar = qCasa * kw1;
    pagar2 = pagar / 10;
    pagar2 = pagar - pagar2;

    printf("1 kw de energia eh equivalente a: %.2f \n", kw1);
    printf("O preco a pagar sera de: %.2f em reais \n", pagar);
    printf("O preco a pagar com desconto de 10 porcento eh de: %.2f em reais \n", pagar2);

    printf("\n");
    printf("Fim do programa.");
}
void ex4()
{
    int anoidade, anoat, total;

    printf("Digite sua idade: \n");
    scanf("%d", &anoidade);

    printf("Digite o ano atual: \n");
    scanf("%d", &anoat);

    total = anoat - anoidade;

    printf("O ano de nascimento da pessoa eh de: %d \n", total);

    printf("\n");
    printf("Fim do programa.");
}
void ex5()
{
    int n1, n2, res = 0;

    printf("\n Digite dois numeros inteiros positivos: \n");
    scanf("%d %d", &n1, &n2);

    for (int i = 1; i <= n1; i++)
    {
        res = res + n2;
    }
    printf("\n A multiplicacao dos dois numeros eh: %d*%d= %d \n", n1, n2, res);
}
void ex6()
{
    printf("\n programa que calcula o fatorial de um numero natural.\n");

    int num, sum = 1;

    printf("Informe um numero natural: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("0! = 1");
    }

    if (num == 1)
    {
        printf("1! = 1");
    }

    printf("%d! = ", num);

    int i = 1;

    while (i <= num)
    {
        printf("%d", i);

        sum = sum * i;

        if (i == num)
        {
            printf(" = %d", sum);
        }
        else
        {
            printf(" x ");
        }
        i++;
    }
}

void ex7()
{
    int n;
    int n1 = 1;
    int n2 = 1;

    printf("\n exiba o n-esimo termo da serie de Fibonacci.\n");

    printf("\n Informe um numero natural: \n");
    scanf("%d", &n);

    printf("1, 1, ");
    n = n - 2;
    for (int i = 0; i < n; i++)
    {
        n1 = n1 + n2;
        printf("%d, ", n1);
        n2 = n1 + n2;
        printf("%d, ", n2);
        i++;
    }
}
void ex8()
{
    int n;
    int m1 = 0;
    int m2 = 0;

    int i = 0;
    while (i < 10)
    {
        printf("Digite os 10 numeros inteiros: ");
        scanf("%d", &n);

        if (n > m1)
        {
            if (m1 > m2)
            {
                m2 = m1;
            }
            m1 = n;
        }
        if (n > m2 && n != m1)
        {
            m2 = n;
        }
        i++;
    }

    printf("\n O segundo maior numero eh: %d \n", m2);
}
void ex9()
{
    printf("\nPrograma que verifica se eh numero primo. \n \n");

    int n;
    int primo = 1;

    printf("Numero: ");
    scanf("%d", &n);

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            primo = 0;
        }
    }

    if (primo == 1)
    {
        printf("Primo! \n");
    }
    else
    {
        printf("Nao eh primo! \n");
    }
}
void ex10()
{
    int num = 1;
    int saldo = 0;
    int saque = 0;
    int deposito = 0;

    while (num != 0)
    {
        printf("\nOpcao: (1) Consulta Saldo \n");
        printf("Opcao: (2) Saque \n");
        printf("Opcao: (3) Deposito \n");
        printf("Opcao: (0) Sair \n\n");
        scanf("%d", &num);

        if (num == 1)
        {
            printf("\nSaldo: %d reais.", saldo);
        }
        if (num == 2)
        {
            printf("\nQual valor deseja sacar: ");
            scanf("%d", &saque);
            saldo -= saque;
        }
        if (num == 3)
        {
            printf("\nQual valor deseja depositar: ");
            scanf("%d", &deposito);
            saldo += deposito;
        }
    }
    printf("\nVoce saiu do banco.\n");
}
