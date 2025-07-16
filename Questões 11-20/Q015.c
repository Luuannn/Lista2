/*Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles estão nos
seguintes intervalos: [0.25], [26,50], [51,75] e [76,100]. A entrada de dados deve terminar quando for lido 
um número negativo.*/


#include <stdio.h>

int main (){
    int intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;
    float n;

    printf ("digite um numero: ");scanf("%f",&n);

    while (n>=0)
    {
       if (n < 26)
       {
         intervalo1++;
       }
       else if (n < 51)
       {
         intervalo2++;
       }
       else if (n<76)
       {
         intervalo3++;
       }
       else if (n<101)
       {
         intervalo4++;
       }
       
        printf ("digite um numero: ");scanf("%f",&n);
    }
    
    printf("numeros entre [0.25]:   %d\nnumeros entre [26.50]:  %d\nnumeros entre [51.75]:  %d\nnumeros entre [76.100]: %d\n",intervalo1,intervalo2,intervalo3,intervalo4);

    

    return 0;
}