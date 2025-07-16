/*42. Faça um algoritmo que calcule a seguinte soma: H = 10 + 10 + 10 + ... + 10

O algoritmo deve ler um número n (inteiro e positivo) e mostrar o resultado final de H. A soma deve ser calculada
apenas uma vez.*/


#include <stdio.h>

int main (){

    int n, h=0;
    
    printf("digite o valor de n: ");scanf("%d", &n);
if (n > 0){
    for (int i = 1; i <= n; i++)
    {
        h += 10;
    }
}
else{
   printf("Valor invalido");
}   

   printf("Valor de H: %d\n", h);

    return 0;
}