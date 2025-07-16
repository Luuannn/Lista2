/*25. Uma empresa deseja aumentar seus preços em 20%. Faça um algoritmo que leia o código e o preço de custo de
cada produto e calcule o preço novo. Calcule também, a média dos preços com e sem aumento. Mostre o código e o
preço novo de cada produto e, no final, as médias. A entrada de dados deve terminar quando for lido um código de
produto negativo. (Use o comando enquanto-faça)*/


#include <stdio.h>

int main (){
    int codigo, contador = 0;
    float valor,Valorfinal,soma = 0, somaFinal = 0, media, mediaFinal;

    printf("Digite o codigo do produto: ");scanf("%d",&codigo);

    while (codigo >= 0)
    {
        printf("Informe o valor do produto: ");scanf("%f",&valor);
        Valorfinal = valor * 1.2;
        printf("Codigo: %d\nValor novo: %.2f\n",codigo,Valorfinal);

        soma += valor;
        somaFinal += Valorfinal;
        contador++;



        printf("Digite o codigo do produto: ");scanf("%d",&codigo);
    }
    media = soma/contador;
    mediaFinal = somaFinal/contador;
   
    printf("Media sem aumento: %.2f\nMedia com aumento: %.2f\n",media,mediaFinal);


    return 0;
}