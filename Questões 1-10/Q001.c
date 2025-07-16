/*1. Escrever um algoritmo que lê 5 valores para a, um de cada vez, 
e conta quantos destes valores são negativos, escrevendo esta informação.*/

#include <stdio.h>

int main(){
int a,negativos = 0;
 
for (int i=1;i<=5;i++){
       printf("escreva um numero: ");scanf("%d",&a);
       if (a < 0){
        negativos++;
    }
  }
  printf("%d valor(es)negativos\n",negativos);

     return 0;
}