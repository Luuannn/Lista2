/*39. Escrever um algoritmo que gera e escreve os 5 primeiros números perfeitos. Um número perfeito é aquele que é
igual a soma dos seus divisores. (Ex.: 6 = 1+2+3; 28= 1+2+4+7+14 etc).*/

// o quinto valor perfeito é mt grande e nao esta carregando.

#include <stdio.h>

int main (){

    int n = 2;
    int contador = 0;

    while (contador < 5)
    {
        int soma = 0;

        for (int i = 1; i <= n/2; i++)
        {
            if (n % i == 0){
                soma += i;
            }
        }
       if (soma == n)
       {
         printf("Numero perfeito %d: %d\n",contador + 1, n); 
         contador++;
       }
       n++;
    }
    return 0;
}