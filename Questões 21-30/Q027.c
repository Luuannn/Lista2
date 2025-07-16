/*27. Escreva um algoritmo que leia 500 valores inteiros e positivos e:
a) encontre o maior valor;
b) encontre o menor valor;
c) calcule a média dos números lidos.*/


#include <stdio.h>

int main (){

    int n, soma = 0,maiorValor,menorValor;
    float media;

    for(int i=1;i<=500;i++){
       do
       {
        printf("digite um numero inteiro positivo:  ");scanf("%d",&n);
       } while (n < 0);

        if(i==1){
            maiorValor = menorValor = n;
        }

        if(n > maiorValor){
            maiorValor = n;
        }
        if (n < menorValor)
        {
            menorValor = n;
        }
        
        soma += n;

    
    }
    
    media = (float)soma/500.0;
    printf("Maior Valor: %d\nMenor Valor: %d\nMedia: %f",maiorValor,menorValor,media);
   
    return 0;
}