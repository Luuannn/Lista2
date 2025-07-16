/*50. Faça um algoritmo que leia 2 valores inteiros e positivos: X e Y. O algoritmo deve calcular e escrever a função
potência X Y*/


#include <stdio.h>

int main (){

    int X,Y,contador = 0;
    int resultado = 1;
    printf ("Escreva o Valor de X e Y: ");scanf("%d %d", &X, &Y);
if (X < 0 || Y < 0){
    printf("Insira valores validos\n");
}
else {
    for (int i = 1; i <= Y;i++)
    {
        resultado *= X;
    }
    printf("Resultado da funcao exponencial: %d\n",resultado);
}
    return 0;
}