#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	//Vetor que armazena os dados dos valores do Lanche
    float v[5]= {4.00,4.50,5.00,2.00,1.50};
    //Código do lanche
    int cod;
    //Quantidade
    int qtd;

    //Capturando os valores
    printf("Digite o valor do lanche\n1- Coxinha : R$1.50\n2- Risole : R$2.00\n3- Croqrete : R$5.00\n4- Coxinha : R$4.50\n1- Torta : R$4.00");
    scanf("%d", &cod);
    printf("Digite a quantidade do lanche\n");
    scanf("%d", &qtd);

	//Imprimindo os valores na tela
    printf("Total: R$ %.2f\n", v[cod-1]*qtd);
}
