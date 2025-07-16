/*Escrever um algoritmo que leia um número não determinado de valores e calcule a média aritmética dos valores
lidos, a quantidade de valores positivos, a quantidade de valores negativos e o percentual de valores negativos e
positivos. Mostre os resultados.*/

#include <stdio.h>

int main (){
    int contador = 0, positivos = 0, negativos = 0;
    float n, total = 0, media = 0, percentPositivos = 0, percentNegativos = 0;
    
    printf ("digite um numero numero qualquer e 0 para ver o resultado: ");scanf("%f",&n);
    while (n != 0)
    {
          total += n;
          contador++;
          media = total/contador;
          if (n > 0){
             positivos++;
          }
          else{
            negativos++;
          }
          percentPositivos = (positivos * 100.0)/contador;
          percentNegativos = (negativos * 100.0)/contador;
 
          printf ("digite outro numero: ");scanf("%f",&n);
    }
        printf("foram lidos %d numeros",contador);
        printf("\nmedia aritimedica: %.2f\nnumeros positivos: %d\nnumeros negativos: %d \n",media,positivos, negativos);
        printf("percentual negativos: %.2f%%\npercentual positivos: %.2f%% \n",percentNegativos,percentPositivos);




    return 0;
}
