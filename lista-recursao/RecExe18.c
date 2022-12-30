// 18) O superfatorial de um número N é definida pelo produto dos N primeiros fatoriais
// de N. Assim, o superfatorial de 4 é
// sf(4) = 1! * 2! * 3! * 4! = 288
// sf(4)  = (1) * (2*1) * (3*2*1) * (4*3*2*1) = 288
// Faça uma função recursiva que receba um número inteiro positivo N e retorne o
// superfatorial desse número.

#include <stdio.h>

int recFatorial(int num)
{

    if (num == 1 || num == 0)
        return 1;

    else
        return num * recFatorial(num - 1);
}

int super(int num)
{
    if (num == 1 || num == 0)
        return 1;

    else
        return recFatorial(num) * super(num - 1);
}

int main()
{
    int num;

    printf("\nDigite um numero para o calculo de super-fatorial: ");
    scanf("%d", &num);

    printf("\nO super-fatorial de %d --> Resultado: %d\n\n", num, super(num));

    return 0;
}