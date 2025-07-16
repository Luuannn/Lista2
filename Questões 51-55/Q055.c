/*55. Faça uma algoritmo que receba duas datas e retorne a diferença entre elas em dias.*/


#include <stdio.h>

    int bissexto(int ano) {
        return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
    }
   
    int contagem(int d, int m, int a){
        int diaMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int total = a * 365 + d;
        
        for (int i = 0; i < m -1; i++)
        {
             total += diaMes[i];
        }
        total += (a/4) - (a/100) + (a/400);

        if (m > 2 && bissexto(a))
        {
            total += 1;
        }
        return total;
    }

    int main (){

        int d1, m1, a1;
        int d2, m2, a2;

        printf("Digite a primeira Data(dia,mes,ano): ");scanf("%d %d %d", &d1, &m1, &a1);
        printf("Digite a segunda  Data(dia,mes,ano): ");scanf("%d %d %d", &d2, &m2, &a2);

        int total = contagem (d1,m1,a1);
        int total2 = contagem (d2,m2,a2);

        int diferenca = total - total2;
        if (diferenca < 0) diferenca = -diferenca;

        printf("A diferenca das datas em dias é: %d dias\n",diferenca);
    

        return 0;
    }


