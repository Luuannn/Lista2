/*47. Uma loja tem 150 clientes cadastrados e deseja mandar uma correspondência a cada um deles anunciando um
bônus especial. Escreva um algoritmo que leia o nome do cliente e o valor das suas compras no ano passado e calcule
um bônus de 10% se o valor das compras for menor que 500.000 e de 15 %, caso contrário.*/


#include <stdio.h>

int main (){

    char nome[100];
    float compra, bonus;


    

    for (int i = 1;i <= 150;i++){
        printf ("Client %d\n",i);

        printf("Informe seu nome: ");scanf(" %[^\n]", nome);

        printf("Digite o valor de suas compras: ");scanf("%f", &compra);

        if (compra < 500000.00)
        {
            bonus = compra * 0.10;
        }
        else{
            bonus = compra * 0.15;
        }
        printf("Nome: %s\n", nome);
        printf("Compras: R$%.2f\n",compra);
        printf("Bonus: R$%.2f\n\n",bonus);
    }
    
    return 0;
}
