/*Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule a média ponderada do aluno,
considerando que o peso para a maior nota seja 4 e para as duas restantes, 3. Mostre o código do aluno, suas três
notas, a média calculada e uma mensagem "APROVADO" se a média for maior ou igual a 5 e "REPROVADO" se a
média for menor que 5. Repita a operação até que o código lido seja negativo.*/


#include <stdio.h>

int main (){
int codigoAluno;
float nota1, nota2, nota3, media;

printf("coloque o codigo do aluno: ");scanf("%d",&codigoAluno);
 
 while (codigoAluno >= 0)
 {
       printf("digite as 3 notas do aluno:\n");scanf("%f %f %f",&nota1,&nota2,&nota3);

      float peso1 = 3, peso2 = 3, peso3 = 3;
      
          if     (nota1 >= nota2 && nota1 >= nota3){
            peso1 = 4;
       } 
          else if (nota2 >= nota3 && nota2 >= nota1)
       {
            peso2 = 4;
       } 
          else
       {
            peso3 = 4;
       }
       media = (nota1*peso1 + nota2*peso2 + nota3*peso3)/10;

       printf("a media do aluno foi %.2f e seu codigo é %d\n",media,codigoAluno);
       printf("suas notas foram %.2f %.2f %.2f\n",nota1,nota2,nota3);
       if (media >= 5){
          printf("APROVADO\n");
       }
       else{
          printf("REPROVADO\n");
       }
       
       printf("coloque o codigo do proximo aluno: ");scanf("%d",&codigoAluno);
   }
 
    return 0;
}