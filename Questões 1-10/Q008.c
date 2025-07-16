/*8. Escreva um algoritmo que calcule a média dos números digitados pelo usuário, se eles forem pares. Termine a leitura
se o usuário digitar zero (0).*/

#include <stdio.h>

int main (){
    int n, contador = 0,soma = 0;
    float media;

    printf("digite valor: "); scanf("%d",&n);

    while (n != 0)
    {
        if (n % 2 == 0){
           soma += n;
           contador++;
        }
        printf("digite valor: "); scanf("%d",&n);
    }
    
    media = (float)soma/(float)contador;

    printf("a media sera: %.2f\n",media);

    return 0;
}