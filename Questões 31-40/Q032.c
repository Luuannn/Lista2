/*32. Escrever um algoritmo que lê 5 pares de valores a, b, todos inteiros
 e positivos, um par de cada vez, e com a < b, escreve os inteiros pares de
  a até b, incluindo o a e o b se forem pares.*/


  #include <stdio.h>

  int main (){
   
  int a, b;



    for (int i = 1; i <= 5; i++)
    {
        printf("Digite o valor a e b: ");scanf("%d %d", &a, &b);
        if (a >= 0 && b >= 0)
        {  
        if (a < b)
        {
            for (int y = a; y <= b; y++)
            {
                if (y % 2 == 0 )
                {
                    printf("Par: %d \n",y);
                }
                
            }
            
        }
       }
       else {
        printf("insira valores positivos\n");
       }
    }
    





    return 0;
  }