/*4. Chico tem 1,50 metro e cresce 2 centímetros por ano,
 enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano.
Construa um algoritmo que calcule e imprima 
quantos anos serão necessários para que Zé seja maior que Chico.*/


#include <stdio.h>
int main (){
    float alturaChico = 1.50, alturaZé = 1.10;
    int contador = 0;

    while (alturaChico > alturaZé){
        alturaChico += 0.02;
        alturaZé += 0.03;
        contador++;
    }
     printf("demorará %d anos para que a altura de Zé ultrapasse a de Chico\n",contador);

    return 0;
}