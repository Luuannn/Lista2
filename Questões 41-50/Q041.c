/*41. Faça um algoritmo que leia as três notas de 50 alunos de uma turma. Para cada aluno, calcule a média ponderada,
como segue: MP = ( n1*2 + n2*4 + n3*3 ) / 10
Além disso, calcule a média geral da turma. Mostre a média de cada aluno e uma mensagem "Aprovado", caso a média
seja maior ou igual a sete, e uma mensagem "Reprovado", caso contrário. Ao final, mostre a média geral.*/

#include <stdio.h>

int main (){

    float n1, n2, n3;
    float soma = 0;

    for (int i = 1; i <= 50; i++)
    {
        printf("digite as 3 notas: ");scanf("%f %f %f",&n1 ,&n2 ,&n3 );
        float MP = (n1*2 + n2*4 + n3*3)/10;
        if (MP>=7)
        {
        printf("APROVADO\n");
        }
        else
        {
        printf("REPROVADO\n");
        }
      soma += MP;
    }
    float media = soma/50;
    printf("Media geral da turma: %.2f\n",media);

    return 0;
}