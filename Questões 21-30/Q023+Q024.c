/*23. Foi realizada uma pesquisa de algumas características físicas da população de uma certa região, a qual coletou os
seguintes dados referentes a cada habitante para serem analisados:
- sexo (masculino e feminino)
- cor dos olhos (azuis, verdes ou castanhos)
- cor dos cabelos ( louros, castanhos, pretos)
- idade
24. Faça um algoritmo que determine e escreva:
- a maior idade dos habitantes
- a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos inclusive e que tenham olhos
verdes e cabelos louros.
O final do conjunto de habitantes é reconhecido pelo valor -1 entrada como idade.*/

#include <stdio.h>

int main (){
    int idade,maiorIdade;
    char sexo, olho, cabelo;
    int casoEspecifico = 0;
    int total = 0;
 



    printf("Informe sua idade: ");scanf("%d",&idade);

    while (idade != -1)
    {
          if (idade < 0)
          {
            printf("Insira idade valida");
          }
          else{
               printf("Informe seu sexo (M/F): ");scanf(" %c",&sexo);
               printf("Informe a cor de seu olho(A/V/C): ");scanf(" %c",&olho);
               printf("Informe a cor de seu cabelo(L/P/C): ");scanf(" %c",&cabelo);
               total++;
               if (total == 1)
               {
                   maiorIdade = idade;
               }
               if (maiorIdade < idade)
                {
                    maiorIdade = idade;
                }
               if ((idade >= 18 && idade <= 35) && (olho == 'A' || olho == 'a') && (cabelo == 'L' || cabelo == 'l') && (sexo == 'F' || sexo == 'f'))
               {
                   casoEspecifico++;
               }
                }
                printf("\nInforme sua idade: ");scanf("%d",&idade);
                }
 printf("Maior idade: %d\n",maiorIdade);
 printf("Mulheres entre 18 e 35 loiras de olhos azuis: %d\n",casoEspecifico);

 return 0;
          }
 
   