/*48. Faça um algoritmo que mostre os conceitos finais dos alunos de uma classe de 75 alunos, considerando (use o
comando CASO):
a) os dados de cada aluno (número de matrícula e nota numérica final) serão fornecidos pelo usuário
b) a tabela de conceitos segue abaixo:
Nota Conceito
de 0,0 a 4,9 D
de 5,0 a 6,9 C
de 7,0 a 8,9 B
de 9,0 a 10,0 A*/


#include <stdio.h>

int main (){

    int matr;
    float nota;
    char conc;

    for (int i = 1; i <= 75; i++)
    {
        printf("Aluno %d\n", i);
        printf("Informe o numero da matricula: ");scanf("%d",&matr);
        printf("Informe a nota: ");scanf("%f",&nota);
    
    if (nota < 0.0 || nota > 10.0)
    {
        printf("nota invalida");
        i--;
        continue;
    }

    int f = (int)(nota);
     
    switch (f)
    {
     case 0: 
     case 1:  
     case 2:  
     case 3: 
     case 4:
     conc = 'D';  break;
     case 5: 
     case 6: 
     conc = 'C'; break;
     case 7:
     case 8:
     conc = 'B'; break;
     case 9:
     case 10:
     conc = 'A'; break;
     default: conc = '?';
    }
    printf("Matricula: %d\nNota: %.1f\nConceito: %c\n\n",matr,nota,conc);
    }
    return 0;
}