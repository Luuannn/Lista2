/*20. Faça um algoritmo que leia vários números inteiros e calcule o somatório dos números negativos. O fim da leitura
será indicado pelo número 0.*/


#include <stdio.h>

int main(){
    int n,somatorio = 0;

    printf ("digite um numero: ");scanf("%d",&n);

    while (n != 0){
     
        if(n<0){
            somatorio += n;
        }
 
        printf ("digite um numero: ");scanf("%d",&n);
    }
    printf("o somatorio dos valores negativos foi: %d\n",somatorio);
}
