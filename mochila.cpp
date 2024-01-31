// Example program
#include <iostream>
#include <string>

int maximoValorMochila(int capacidade, int *pesos, int *valores, int n){
   if(n == 0) return 0;
   
   // Não coloca o cara n!
   int result1 = maximoValorMochila(capacidade, pesos, valores, n-1);    
   
   // Coloca o cara
   int result2 = pesos[n-1]<=capacidade?maximoValorMochila(capacidade - pesos[n-1], pesos, valores, n-1) + valores[n-1]: 0;

   if(result1 > result2)
     return result1;
   else
    return result2;
}


int main()
{

  int pesos[] = {12, 2, 1, 1, 4};
  int valores[] = {4, 2, 1, 2, 10};
  std::string name;
  std::cout << "What is your name? ";
  getline (std::cin, name);
  std::cout << "Hello, " << maximoValorMochila(15, pesos, valores, 5)  << "!\n";
}
