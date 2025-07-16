/*3. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, 
coletando dados sobre o salário e número de
filhos. A prefeitura deseja saber:
a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$100,00.*/

#include <stdio.h>

int main (){
    int filhos,somaFIlhos = 0, total = 0, salarioBaixo = 0;
    float salario, somaSalario = 0, maiorSalario = 0;
    
    printf("digite o salario: ");scanf("%f",&salario);

    while (salario >= 0){
        printf("digite o número de filhos: ");scanf("%d",&filhos);

        somaSalario += salario;
        somaFIlhos += filhos;
        total++;

        if (salario > maiorSalario){
            maiorSalario = salario;
        }
        if (salario <= 100.0){
            salarioBaixo++;
        }
        printf("digite o salario: ");scanf("%f",&salario);
     }
     printf ("media de salario: R$%.2f\n",somaSalario/total);
     printf ("media de filhos: %2.f\n",(float)somaFIlhos/total);
     printf ("maior salario: R$%2.f \n",maiorSalario);
     printf ("percentual de salarios abaixo de 100: %2.f%%\n",(salarioBaixo * 100.0)/total);

     return 0;
}