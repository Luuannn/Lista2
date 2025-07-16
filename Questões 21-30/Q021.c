/*21. Faça um algoritmo que leia vários números inteiros e positivos e calcule o produtório dos números pares. O fim da
leitura será indicado pelo número 0.*/


#include <stdio.h>

int main(){
    int n,produtorio = 1;

    printf ("digite um numero: ");scanf("%d",&n);

    while (n != 0){
     
        if(n % 2 == 0){
            produtorio *= n;
        }
 
        printf ("digite um numero: ");scanf("%d",&n);
    }
    printf("o produtorio dos valores pares foi: %d\n",produtorio);
} 