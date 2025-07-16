/*9. Escreva um algoritmo que leia 50 valores 
e encontre o maior e o menor deles. Mostre o resultado.*/

#include <stdio.h>

int main (){
int valor,maior,menor; 
    
    printf("digite o valor 1: ");scanf("%d",&valor);
    maior = valor; menor = valor;
    
    for  (int i = 2; i <= 50; i++){
         printf("digite o valor %d: ",i);scanf("%d",&valor);
        if (valor > maior)
        {
            maior = valor;
        }
        if (valor < menor)
        {
            menor = valor;
        }
        
    }
    
    printf("o maior valor foi: %d \ne o menor valor foi: %d\n",maior,menor);


    return 0;
}