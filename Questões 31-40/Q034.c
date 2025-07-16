/*34. Escrever um algoritmo que leia 5 conjuntos de 2 valores, o primeiro representando o número de um aluno,
 e o segundo representando a sua altura em centímetros. Encontre o aluno mais alto e o mais baixo. 
 Mostre o número do aluno mais alto e do mais baixo, junto com suas alturas.*/

 
 #include <stdio.h>

 int main (){

    int n, altura;
    int maiorAltura, menorAltura, AlunoBaixo, AlunoAlto;

    for (int i = 1; i <= 5; i++)
    {
         printf("Informe o numero do Aluno: ");scanf("%d", &n);
         printf("Informe a altura do Aluno: ");scanf("%d", &altura);

         if (i == 1)
         {
            menorAltura = altura;
            maiorAltura = altura;
            AlunoAlto = n;
            AlunoBaixo = n;
         }
         if (altura > maiorAltura)
         {
            maiorAltura = altura;
            AlunoAlto = n;
         }
         if (altura < menorAltura)
         {
            menorAltura = altura;
            AlunoBaixo = n;
         }
         
    }
        printf("O numero do Aluno mais alto é %d com %dcm\n",AlunoAlto,maiorAltura);
        printf("numero do aluno mais baixo é %d com %dcm\n",AlunoBaixo,menorAltura);


    return 0;
 }