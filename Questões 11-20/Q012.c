/*12. Escrever um algoritmo que leia 20 valores para uma variável n e, para cada um deles, calcule a tabuada de 1 até n.
Mostre a tabuada na forma:
1 x n = n
2 x n = 2n
3 x n = 3n
....... n x n = n2*/


#include <stdio.h>

int main (){
int n,r;
    for (int i = 1; i < 21; i++)
    {
        printf("digite a variavel: ");scanf("%d",&n);
        int y=1;
        while(y<=n){
            r = y * n;
            printf("%d * %d = %d\n",y,n,r);
            y++;
        }
    }
    
    return 0;
}