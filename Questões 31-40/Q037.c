/*37. Escrever um algoritmo que leia um valor X e calcule e mostre os 20 primeiros termos da série:
1 1 1 1 .....
X X2 X3 X4*/


#include <stdio.h>

int main (){

    float x;
    printf("Digite o valor de x: ");scanf("%f", &x);

    if (x == 0)
    {
        printf("insira valor valido");
    }
    else{
        float p = x;
        for (int i = 1; i <= 20; i++)
        {
            float termo = 1/p;
            printf("Termo %2d: %.10f\n",i,termo);
            p *= x;
        }
        
    }




    return 0;
}