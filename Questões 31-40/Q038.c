/*38. Escrever um algoritmo que calcula e escreve o produto dos números primos entre 92 e 1478.*/


#include <stdio.h>
#include <stdbool.h>

bool primo(int n){
     if (n<2) return false;
     for (int i = 2; i * i <= n; i++){
        if (n % i == 0) return false;
     }
    return true;
}

int main (){
    long double p = 1.0;

    for (int i = 92; i <= 1478;i++){
        if (primo(i)){
            p *= i;
        }
    }
    printf("Produto dos primos entre 92 e 1478: %.0Lf\n",p);

    return 0;
}