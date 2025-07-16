/*6. Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os dados
utilizados para a contagem dos votos obedecem à seguinte codificação:
- 1,2,3,4 = voto para os respectivos candidatos;
- 5 = voto nulo;
- 6 = voto em branco;
Elabore um algoritmo que leia o código do candidado em um voto. Calcule e escreva:
- total de votos para cada candidato;
- total de votos nulos;
- total de votos em branco;
Como finalizador do conjunto de votos, tem-se o valor 0.*/


#include <stdio.h>

int main () {
int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0; 
int votosNulos = 0, votosBrancos = 0,voto;
printf(" digite seu voto: ");scanf("%d",&voto);
    
    while (voto != 0){
        if (voto == 1){
            candidato1++;
        } else if (voto == 2){
            candidato2++;
        } else if (voto == 3){
            candidato3++;
        } else if (voto == 4){
            candidato4++;
        } else if (voto == 5){
            votosNulos++;
        } else if (voto == 6){
            votosBrancos++;
        }
        
    printf(" digite seu voto: ");scanf("%d",&voto);
    }
    printf(" candidato 1 recebeu %d votos\n candidato 2 recebeu %d votos\n candidato 3 recebeu %d votos\n candidato 4 recebeu %d votos\n"
        ,candidato1,candidato2,candidato3,candidato4);
    printf(" tiveram %d votos em nulos e %d votos em branco\n",votosNulos,votosBrancos);
    return 0;
}