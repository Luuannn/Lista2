/*13. Escrever um algoritmo que leia um número n que indica quantos valores devem ser lidos a seguir.
 Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial deste valor.*/


 #include <stdio.h>

 int main (){
    int n,valor;

    printf("digite o valor n: ");scanf("%d",&n);
    int i = 1;
    while (i<=n)
    {
        printf("digite o valor que voce quer a fatorial: ");scanf("%d",&valor);
        
        int contador = 1,fatorial = 1;
        
        while (contador<=valor)
        {
            fatorial *= contador;
            contador++;
        }
     printf("o valor lido foi %d e o fatorial dele é: %d\n",valor,fatorial);
     i++;
    }
    
    return 0;
 }