/*54. Faça uma algoritmo que receba 2 numeros e divida o intervalo entre eles em 3 partes iguais. Obs. Faça a
consistência para que os extremos não sejam iguais.*/

#include <stdio.h>
int main (){

    float a, b;

    printf("Escreva o primeiro numero: ");scanf("%f", &a);
    printf("Escreva o segundo  numero: ");scanf("%f", &b);
    if (a == b)
    {
        printf("insira valores diferentes\n");
    } else{ 
        if (a > b)
        {
            float temp = a;
            a = b;
            b = temp;
        }
        float intervalo = (b - a)/3.0;

        float p1 = a + intervalo;
        float p2 = a + 2 * intervalo;

        printf("Parte 1: vai de %.2f ate %.2f\nParte 2: vai de %.2f ate %.2f\nParte 3: vai de %.2f ate %.2f\n",a,p1,p1,p2,p2,b);
        printf("%.2f valores por intervalo\n",intervalo);
    }


    return 0;
}