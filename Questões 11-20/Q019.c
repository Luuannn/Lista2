/*19. Faça um algoritmo que leia uma quantidade não determinada de números positivos. Calcule a quantidade de
números pares e ímpares, a média de valores pares e a média geral dos números lidos. O número que encerrará a
leitura será zero.*/


#include <stdio.h>

int main(){
    int n;
    int pares = 0, impares = 0, contador = 0, somaPares = 0, somaGeral = 0;
    float media = 0, mediaPares= 0;
    
    printf("digite um valor: ");scanf("%d",&n);

    while (n != 0){
        if (n < 0)
        {
            printf("digite um valor positivo\n");
        }
        else{
            if (n % 2 == 0)
            {
                pares++;
                somaPares += n;
            }
            else{
                impares++;
            }
            somaGeral += n;
            contador++;
        }
        
        
        
        printf("digite um valor: ");scanf("%d",&n);
    }

    if (pares > 0)
    {
        mediaPares = (float)somaPares/pares;
    }
    if (contador > 0)
    {
        media = (float)somaGeral/contador;
    }

    printf("Numeros pares: %d\nNumeros impares: %d\nMedia dos pares: %.2f\nMedia total: %.2f\n",pares,impares,mediaPares,media);

    return 0;
}