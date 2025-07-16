/*17.Escrever um algoritmo que lê um número não determinado de pares de valores m,n, todos inteiros e positivos, um
par de cada vez, e calcula e escreve a soma dos n inteiros consecutivos a partir de m inclusive.*/


#include <stdio.h>


int main (){
    int m,n;


        printf("digite os valores de M e N: ");scanf("%d %d",&m, &n);

        while (m > 0 && n > 0)
        {
             int soma = 0;
             for (int i = 0;i<n;i++){
                soma += m + i;
    
            }
        printf ("Soma: %d\n",soma);
        printf("digite os valores de M e N: \n");scanf("%d %d",&m, &n);
        }
        
        


    return 0;
}