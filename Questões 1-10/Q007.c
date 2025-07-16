/*7. Escreva um algoritmo que calcule a média aritmética das 3 notas dos alunos de uma classe. 
O algoritmo deverá ler, além das notas, o código do aluno e deverá ser encerrado quando o código for igual a zero.*/


#include <stdio.h>

int main (){
int codigoAluno;
float nota1, nota2, nota3, media;
 printf("coloque o codigo do aluno: ");scanf("%d",&codigoAluno);
 
 while (codigoAluno != 0)
 {
       printf("digite as 3 notas do aluno:\n");scanf("%f %f %f",&nota1,&nota2,&nota3);
       media = (nota1 + nota2 + nota3)/3;
       printf("a media do aluno foi %.2f e seu codigo é %d\n",media,codigoAluno);
       
       printf("coloque o codigo do aluno: ");scanf("%d",&codigoAluno);
   }
 
    return 0;
}