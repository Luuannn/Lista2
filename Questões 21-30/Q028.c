/*28. Escreva um algoritmo que lê um valor n inteiro e positivo e que calcula a seguinte soma:
S := 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
O algoritmo deve escrever cada termo gerado e o valor final de S.*/


#include <stdio.h>

int main (){

    int n;
    float S = 0.0;

    printf("digite o valor de n: ");scanf("%d",&n);

    printf("termos da soma:\n ");
    for (int i = 1; i <= n; i++)
    {
        printf("1/%d ",i);
        if (i != n){
            printf("+ ");
        }
       
        S += 1.0/(float)i;
    }
    
    printf ("\nValor de S: %f\n",S);

    return 0;
}