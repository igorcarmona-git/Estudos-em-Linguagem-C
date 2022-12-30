// Faça uma função recursiva que calcule e retorne o N-ésimo termo da sequência
// Fibonacci. Alguns números desta sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...

//A sequência de Fibonacci é uma sequência numérica em que cada número seguinte 
// é a soma dos dois anteriores, iniciando por 0. 
// Assim: 0 – 1 – 1 – 2 – 3 – 5 – 8 – 13 – 21 – 34 – 55 – 89 – 144 – E assim por diante…

// o 1 é 0
// o 2 é 1

#include <stdio.h>

int recFibo(int num){
    if(num==1)
        return 0;
    else{
        if(num==2)
            return 1;
        else
            return recFibo(num-1)+(num-2);
    }
}

int main(){
    int num=10;

    printf("\nO numero da decima sequencia de fibonacci eh: %d\n\n", recFibo(num));

    return 0;
}
