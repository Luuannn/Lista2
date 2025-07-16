/*11. Escreva um algoritmo que leia um número n (número de termos de uma progressão aritmética), a1 ( o primeiro
termo da progressão) e r (a razão da progressão) e escreva os n termos desta progressão, bem como a soma dos
elementos.*/


#include <stdio.h>

int main (){
    int n;
    float a1, r, t, soma = 0;

    printf("escreva o numero de termos da PA: ");scanf("%d",&n);
    printf("escreva o primeiro termo da PA: ");scanf("%f",&a1);
    printf("escreva a razao da PA: ");scanf("%f",&r);

    for (int i=0;i<n;i++){
        t = a1 + i * r;
        printf("%.2f ",t);
        soma += t;
    }
    printf("\na soma dos termo sera: %.2f",soma);

    return 0;
}