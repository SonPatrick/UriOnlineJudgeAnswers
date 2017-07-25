#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    //Valores para notas em centavos
    int n[6]={10000,5000,2000,1000,500,200};
    //Valores das cédulas existentes
    int m[6]={100,50,25,10,5,1};
    double rest;
    int cents;
    int i;

    //Cpturando os dados do usuário;
    printf("Digite o valor\n");
    scanf("%lf", &rest);

    //Convertendo para centavos
    cents = rest*100;

    //Encontrando as notas
    printf("NOTAS:\n");
    for (i = 0;i<6;i++){
        printf("%d nota(s) de R$ %.2f\n", cents/n[i], (float) n[i]/100);
        cents = (cents)%n[i];
    }
    //Encontrando as moedas
    printf("MOEDAS:\n");
    for (i = 0;i<6;i++){
        printf("%d moeda(s) de R$ %.2f\n", cents/m[i], (float) m[i]/100);
        cents = (cents)%m[i];
    }
}
