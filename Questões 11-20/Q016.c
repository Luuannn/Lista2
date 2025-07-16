/*16. Escrever um algoritmo que lê um conjunto não determinado de valores, um de cada vez, e escreve uma tabela com
cabeçalho, que deve ser repetido a cada 20 linhas. A tabela conterá o valor lido, seu quadrado, seu cubo e sua raiz
quadrada.*/


#include <stdio.h>

float raizQ(float x){
    if (x == 0) return 0;

    float raiz = x / 2.0;
    for(int i = 0; i < 10;i++){
        raiz = (raiz + x/raiz)/2.0;
    }
    return raiz;
}
int main (){
    float valor;
    int linhas = 0;

    printf("Digite os valores: \n");
    printf("Valor: ");scanf("%f", &valor);

    while (valor >= 0)
    {
        if (linhas % 20 == 0)
        {
            printf("\n%-10s %-10s %-10s %-15s\n", "Valor", "Quadrado", "Cubo", "Raiz Quadrada");
            printf("--------------------------------------------------------\n");
        }
        float quadrado = valor * valor;
        float cubo = valor * valor * valor;
        float raiz = raizQ(valor);

        printf("%-10.2f %-10.2f %-10.2f %-15.5f\n", valor, quadrado, cubo, raiz);

        linhas++;

        printf("Valor: ");scanf("%f", &valor);
    }
    printf("\nForam lido %d valores.\n",linhas);
}