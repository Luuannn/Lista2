/*31. Escrever um algoritmo que lê 10 valores, um de cada vez, e conta
 quantos deles estão no intervalo [10,20] e quantos deles estão fora do 
 intervalo, escrevendo estas informações.*/


 #include <stdio.h>

 int main (){
  
 int n,dentroIntervalo = 0, foraIntervalo = 0;



    for (int i = 1; i <= 10; i++)
    {
        printf ("digite um valor: ");scanf("%d",&n);
        if (n >= 10 && n <= 20){
            dentroIntervalo++;
        }
        else{
            foraIntervalo++;
        }
    }
    
    printf("Numeros no Intervalo [10,20]: %d\nNumeros fora do intervalo: %d\n",dentroIntervalo,foraIntervalo);


    return 0;
 }