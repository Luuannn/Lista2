/*36. Escrever um algoritmo que leia um número N que indica quantos valores devem ser lidos a seguir. Para cada
número lido, mostre uma tabela contendo o valor lido e o fatorial deste valor.*/


#include <stdio.h>

int main (){

    int n,valor;
    
printf("Infore quantos valores devem ser lidos: ");scanf("%d",&n);

for (int i = 1; i <= n; i++)
{
     
    
    
     printf("Informe o %d valor: ",i);scanf("%d",&valor);
     if (valor < 0)
    {
        printf("Insira valor valido\n");
    }
    else {
    int fatorial = 1;
     for (int y = 1; y <= valor; y++)
     {
        fatorial *= y;
     }
   printf("Valor: %-10d Fatorial: %-10d\n", valor, fatorial);
    }
}

    
    return 0;
}