/*22. Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade, sexo (M/F) e salário.
Faça um algoritmo que informe:
a) a média de salário do grupo;
b) maior e menor idade do grupo;
c) quantidade de mulheres com salário até R$100,00.
Encerre a entrada de dados quando for digitada uma idade negativa. (Use o comando enquanto-faça e não use vetores
ou matrizes)*/


#include <stdio.h>

int main (){

int idade,maiorIdade,menorIdade;
char sexo;
float salario,media;

int total = 0;
float soma = 0;
int mulherSalariobaixo = 0;

printf("Fale a sua idade (valor negativo para encerrar):");scanf("%d", &idade);

while(idade >= 0){

     printf("Fale o seu sexo(M/F): ");scanf(" %c", &sexo);
     printf("Fale o seu salario: R$");scanf("%f",&salario);
     
     soma += salario;
     total++;

     if (total == 1)
     {
        maiorIdade = idade;
        menorIdade = idade;
     }
     else {
         if (maiorIdade < idade){
         maiorIdade = idade;
     }
         if (menorIdade > idade){
         menorIdade = idade;
     }
    }
     if ((sexo == 'F' || sexo == 'f') && salario <= 100.0 )
     {
        mulherSalariobaixo++;
     }

     printf("Fale a sua idade (valor negativo para encerrar):");scanf("%d", &idade);

}
     
     media = (float)soma/(float)total;
     
     printf("a) Media de salario: %.2f\n",media);
     printf("b) Maior e Menor idade: %d e %d\n",maiorIdade,menorIdade);
     printf("c) Mulheres que recebem abaixo de 100: %d\n",mulherSalariobaixo);





   return 0;
}