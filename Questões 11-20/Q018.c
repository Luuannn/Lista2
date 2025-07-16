/*18. Escrever um algoritmo que lê um número não determinado de valores para m, todos inteiros e positivos, um de cada
vez. Se m for par, verificar quantos divisores possui e escrever esta informação. Se m for ímpar e menor do que 10
calcular e escrever o fatorial de m. Se m for ímpar e maior ou igual a 10 calcular e escrever a soma dos inteiros de 1 até
m.*/


#include <stdio.h>


int main (){
    int m;


    printf("Digite o valor de M: ");scanf("%d",&m);

    while (m > 0)
    {
        if (m % 2 == 0){
            int divisores = 0;
            for (int i=1;i<=m;i++){
                if (m % i == 0){
                    divisores++;
                }
            }
        printf("M tem %d divisores\n",divisores);
        }
     else if (m < 10)
     {
        int fatorial = 1;
        for (int i = 1; i <= m; i++)
        {
            fatorial *= i;
        }
        printf("Fatorial de M: %d\n",fatorial);
     }
     else{
        int soma = 0;
        for (int i = 1; i <= m; i++)
        {
            soma += i;
        }
        printf("Somatorio de M: %d\n",soma);
     }
    printf("Digite o valor de M: ");scanf("%d",&m);

    }
    


    return 0;
}