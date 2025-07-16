/*40. Escrever um algoritmo que lê um valor n que indica quantos valores devem ser lidos para m, valores inteiros e
positivos, com leitura de um valor de cada vez. Escreva uma tabela contendo o valor lido, o somatório dos inteiros de 1
até m e o fatorial de m.*/


#include <stdio.h>

int main (){

    int n,m;

    printf("Digite o valor de n: ");scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf ("\nDigite o valor de m: ");scanf("%d", &m);
        if (m < 0)
        {
            printf("Insira valor valido\n");
            i--;
        }
        else {
            printf("Valor lido: %d\n",m);
            int fatorial = 1;
            int somatorio = 0;
            for (int y = 1; y <= m; y++)
            {
                fatorial *= y;
                somatorio += y;
            }
            printf ("Fatorial: %d\n",fatorial);
            printf ("Somatorio: %d\n",somatorio);
        }   
    }
    

    return 0; 
}