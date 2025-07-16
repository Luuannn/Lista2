/*52. Faça um algoritmo que calcule a combinação e arranjo de um conjunto de tamanho N em subconjuntos de p
elementos.*/

#include <stdio.h>

int fatorial(int n){
    int fato = 1;
    for (int i = 2; i <= n; i++)
    {
        fato *= i;
    }
    return fato;
}
int main(){
    int n,p;

    printf ("digite o valor do tamanho do conjunto:    ");scanf("%d", &n);
    printf ("digite o valor do tamanho do subconjunto: ");scanf("%d", &p);

    if (p > n || n < 0 || p < 0)
    {
        printf("insira valores validos\n");
    }
    else {
       int faton = fatorial(n);
       int fatop = fatorial(p);
       int fatonp = fatorial(n - p);
       int arranjo = faton / fatonp;
       int combinacao = faton / (fatop * fatonp);

       printf ("\nArranjo(%d, %d):    %d\n",n,p,arranjo);
       printf ("Combinacao(%d, %d): %d\n",n,p,combinacao);








    }
    return 0;
}