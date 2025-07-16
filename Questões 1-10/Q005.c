/*5. Construir um algoritmo que calcule a média aritmética de vários valores inteiros positivos, 
lidos externamente. O final da leitura acontecerá quando for lido um valor negativo.*/


#include <stdio.h>

int main (){
    int n,soma = 0, contador = 0;
    float media;
    printf("digite um numero inteiro positivo: ");scanf("%d",&n);

    while (n>=0)
    {
    soma += n;
    contador ++;
    printf("digite um numero inteiro positivo: ");scanf("%d",&n);
    }
    media = (float)soma/(float)contador;
    printf("a media dos valores digitas é: %.1f\n",media);

    return 0;
}