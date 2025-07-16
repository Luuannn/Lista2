/*49.Faça um algoritmo que lê um valor N inteiro e positivo 
e que calcula e escreve o fatorial de N (N!).*/


#include <stdio.h>

int main (){
     int n,fatorial = 1;

      printf ("digite o valor de N: ");scanf("%d",&n);
     

     
     if (n < 0){
        printf("digite um valor valido\n");
    }
    else{ 
     for (int i = 1; i <= n; i++)
     {
        fatorial *= i;
     }
      printf("o fatorial de N: %d\n",fatorial);
    }

    
     return 0;
}