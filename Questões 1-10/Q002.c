/*2. Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o valor de E.
E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N!*/ 

// no enunciado nao especifica que tenho que fazer todos os fatorias ate o n, mas decidi fazer dessa forma


#include <stdio.h>


int main (){


    int n,fatorial = 1;
    float E = 1.0;

    printf ("digite um numero: ");scanf("%d",&n);

     if (n <= 0){
        printf("digite um valor valido\n");
    }

    else{ 
    for(int i=1;i<=n;i++){
       fatorial *= i;
       E += 1.0/(float)fatorial;
    }
 
        printf("Valor de E: %f\n",E);
    }
    
    return 0;

}