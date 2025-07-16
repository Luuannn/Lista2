/*43. Fazer um algoritmo que leia 5 grupos de 4 valores (A,B,C,D) e mostre-os na ordem lida. Em seguida, ordene-os em
ordem decrescente e mostre-os novamente, já ordenados.*/

#include <stdio.h>

void ordem(int v[], int tamanho){
    int t;
    for (int i = 0; i < tamanho; i++)
    {
        for(int y = i+1;y<tamanho;y++){
            if (v[i] < v[y]) {
                t = v[i];
                v[i] = v[y];
                v[y] = t;
            }
        }
    }
}

int main (){

    int valores[4];
    for (int g = 1; g <= 5; g++)
    {
        printf("\nGrupo %d\n",g);

        for (int i = 0; i < 4; i++)
        {
            printf("Digite o valor %c: ",'A' + i);scanf("%d", &valores[i]);
        }
        printf("valores na ordem: ");
        for (int i = 0; i < 4; i++){
            printf("%d ",valores[i]);
        }
        ordem(valores, 4);
        printf("\nValores em ordem descrecente: ");
        for (int i = 0; i < 4; i++)
        {
            printf("%d ",valores[i]);
        }
        printf("\n");
    }
    return 0;
}