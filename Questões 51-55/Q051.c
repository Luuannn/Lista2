/*51. Faça um algoritmo que calcule o fatorial de um número.*/


#include <stdio.h>

int main (){

    int n;
    int fatorial = 1;

    printf("Informe o numero: ");scanf("%d",&n);


    if (n < 0){
        printf("Insira valor positivo\n");}
    else {
    for (int i = 1; i <= n; i++)
    {
        fatorial *= i;
    }
    
    printf("o fatorial de %d: %d\n",n,fatorial);
}
    return 0;
}