/*44. Foi feita uma estatística nas 200 principais cidades brasileiras para coletar dados sobre acidentes de trânsito. Foram
obtidos os seguintes dados:
- código da cidade
- estado (RS, SC, PR, SP, RJ, ...)
- número de veículos de passeio (em 1992)
- número de acidentes de trânsito com vítimas (em 1992)
Deseja-se saber:
a) qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem
b) qual a média de veículos nas cidades brasileiras
c) qual a média de acidentes com vítimas entre as cidades do Rio Grande do Sul.*/


#include <stdio.h>
#include <string.h>

int main (){
    int c, v, a;
    char estado[3];
    int MaiorAc = -1, MenorAc = -1;
    int cMaior = 0, cMenor = 0;
    int somaV = 0, somaAcRS = 0, cidadesRS = 0;

    for (int i = 1; i <= 200; i++)
    {
        printf ("Cidade %d\n",i);
        printf ("Codigo: ");scanf("%d", &c);
        printf ("Estado: ");scanf("%s", estado);
        printf ("Veiculos de passeio: ");scanf("%d", &v);
        printf ("Acidentes com vitimas: ");scanf("%d", &a);

        somaV += v;

        if (i == 1 || a > MaiorAc)
        {
            MaiorAc = a;
            cMaior = c;
        }
        if (i == 1 || a < MenorAc)
        {
            MenorAc = a;
            cMenor = c;
        }
        if (strcmp(estado, "RS") == 0 || strcmp (estado, "rs") == 0){
            somaAcRS += a;
            cidadesRS++;
        }
        printf("\n");
    }
    float mediaV = somaV/200.0;
    float mediaAcRS;
    if ( cidadesRS > 0)
    {
        mediaAcRS = somaAcRS/(float)cidadesRS;
    }
    else {
        mediaAcRS = 0;
    }
    
    printf("a) Maior indice: %d da cidade %d)\n",MaiorAc,cMaior);
    printf("   Menor indice: %d da cidade %d)\n",MenorAc,cMenor);
    printf("b) Media veiculos: %.2f\n",mediaV);
    printf("c) Media Acidentes em RS: %.2f\n",mediaAcRS);


    return 0;
}