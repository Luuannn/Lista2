/*29. Escrever um algoritmo que calcule e mostre a 
média aritmética dos números lidos entre 13 e 73.*/


#include <stdio.h>

int main (){
int soma = 0;


    for (int i=14;i<=72;i++){
        soma += i;
    }
    
    
    float media = (float)soma/59;

    printf("Media aritmetica: %.2f\n",media);

    return 0;
}