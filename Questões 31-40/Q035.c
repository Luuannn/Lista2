/*35. Escrever um algoritmo que leia um conjunto de 50 informações contendo, cada uma delas, a altura e o sexo de uma
pessoa (código=1, masculino código=2, feminino), calcule e mostre o seguinte:
a) a maior e a menor altura da turma
b) a média da altura das mulheres
c) a média da altura da turma.*/


#include <stdio.h>

int main (){
    int altura,sexo,maiorAltura,menorAltura;
    int somaMulher = 0, somaAltura = 0;
    float media, mediaMulher;
    int quantMulher = 0;

    for (int i = 1; i <= 50; i++)
    {
        printf("Informe a Altura: ");scanf("%d", &altura);
        printf("Informe o seu sexo (1 pra Masclino/2 pra feminino): ");scanf("%d", &sexo);
        if (i == 1)
        {
            menorAltura = altura;
            maiorAltura = altura;
        }
        if (altura < menorAltura)
        {
            menorAltura = altura;
        }
        if (altura > maiorAltura)
        {
            maiorAltura = altura;
        }
        if (sexo == 2)
        {
            somaMulher += altura;
            quantMulher++;
        }
      somaAltura += altura;
    }
    media = (float)somaAltura/50.0;
    if (quantMulher > 0)
    {
        mediaMulher = (float)somaMulher/quantMulher;
    }
    else{
        mediaMulher = 0;
    }
    

    printf("a) Maior Altura: %d\nMenor Altura: %d\n",maiorAltura,menorAltura);
    printf("b) Media Altura Mulheres: %.2f\n",mediaMulher);
    printf("c) Media Geral: %.2f\n",media);



    return 0;
}