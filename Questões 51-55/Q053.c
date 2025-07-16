/*53. Faça um algoritmo que calcule os 20 primeiros números primos, dados os tres primeiros 1,2 e 3.*/


#include <stdio.h>

int primo(int n){
    if (n < 2) return 0;
    for (int i = 2; i * i <= n;i++){
         if (n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int contador = 3;
    int valor = 4;

    printf("20 Primeiros primos: ");
    printf("1 2 3");

    while (contador < 20)
    {
        if (primo(valor)){
            printf("%d ", valor);
            contador++;
        }
        valor++;
    }
    
    printf("\n");
    
    return 0;
}