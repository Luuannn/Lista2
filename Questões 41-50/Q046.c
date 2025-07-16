/*46. Foi realizada uma pesquisa de algumas características físicas da população de um certa região. Foram
entrevistadas 500 pessoas e coletados os seguintes dados:
a- sexo: M (masculino) e F (feminino)
b- cor dos olhos: A (azuis), V (verdes) e C (castanhos)
c- cor dos cabelos: L (louros), C (castanhos) e P (pretos)
d- idade
Deseja-se saber:
a maior idade do grupo
a quantidade de indivíduos do sexo feminino, cuja idade está entre 18 e 35 anos e que tenham olhos verdes
e cabelos louros.*/


#include <stdio.h>

int main (){

    int idade, maiorIdade, casoesp = 0;
    char sexo, olhos, cabelo;

    for (int i = 1; i <= 500; i++)
    {
        printf("Inform seu sexo(M/F): ");scanf(" %c", &sexo);
        printf("Informe a cor dos olhos(A/V/C): ");scanf(" %c", &olhos);
        printf("Informe a cor do cabelo(L/C/P): ");scanf(" %c", &cabelo);
        printf("Informe a idade: ");scanf("%d", &idade);
        
        if (i == 1)
        {
            maiorIdade = idade;
        }
        if (maiorIdade < idade)
        {
            maiorIdade = idade;
        }
        if  ((sexo == 'F' || sexo == 'f') && 
            (idade >= 18 && idade <= 35) && 
            (cabelo == 'L' || cabelo == 'l') && 
            (olhos == 'V' || olhos == 'v'))
        {
            casoesp++;
        }
        
    }
    printf ("Maior idade: %d\nMulheres nesse caso especifico: %d\n",maiorIdade,casoesp);


    return 0;
}