/*45. Foi feita uma pesquisa entre os 1000 habitantes de uma região para coletar os seguintes dados: sexo (0-feminino, 1-
masculino), idade e altura. Faça um algoritmo que leia as informações coletadas e mostre as seguintes informações:
(use o comando repita-até)
a) média da idade do grupo;
b) média da altura das mulheres;
c) média da idade dos homens;
d) percentual de pessoas com idade entre 18 e 35 anos (inclusive).*/


#include <stdio.h>

int main(){

    int sexo, idade, altura;
    int somaIdade = 0;
    int mulheres = 0, somaMulherAlt = 0;
    int Homens = 0, somaIdadeH = 0;
    int idadeesp = 0;
    int contador = 1;

    while (contador < 1001){
        printf("Informe seu sexo (0-feminino, 1-masculino): ");scanf("%d", &sexo);
        printf("Informe sua altura em cm: ");scanf("%d", &altura);
        printf("Informe sua idade: ");scanf("%d", &idade);
        
        somaIdade += idade;
        
        if (sexo == 0)
        {
            somaMulherAlt+= altura;
            mulheres++;
        }
        if (sexo == 1)
        {
            somaIdadeH += idade;
            Homens++;
        }     
        if (idade >= 18 && idade <= 35)
        {
            idadeesp++;
        }
        
       
        
        contador++;
    } 
     
    float mediaIdadeG = (float)somaIdade/1000.0;
    float mediaAltM   = (float)somaMulherAlt/(float)mulheres;
    float mediaIdaH   = (float)somaIdadeH/Homens;
    float perc = ((float)mulheres/1000.0)*100;

    printf("a) media de idade do grupo: %.2f\n",mediaIdadeG);
    printf("b) media altura das mulheres: %.2f\n",mediaAltM);
    printf("c) media idade dos homens: %.2f\n",mediaIdaH);
    printf("d) percentual de mulheres: %.1f%%\n",perc);

    return 0;
}