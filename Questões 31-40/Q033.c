/*33. Escrever um algoritmo que leia 20 valores para uma variável N e, para 
cada um deles, calcule a tabuada de 1 até N. Mostre a tabuada na forma: 1 x N = N 
2 x N = 2N 3 x N = 3N ...... N x N = N2*/

#include <stdio.h>

int main (){

int N;


for (int i = 1; i <= 20; i++)
{
    printf("digite o valor de N: ");scanf("%d",&N);
    for (int y = 1; y <= N; y++)
    {
        printf("%d x %d = %d\n",y,N,y*N);
    }
    

}
return 0;
}