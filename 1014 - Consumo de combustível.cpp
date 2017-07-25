#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int km;
    double l;

	//Captando as informações
    printf("Digite os valores da distância em Km e do Combustivel em Litros");
    scanf("%d", &km);
    scanf("%lf", &l);

    //Imprimindo o resultado na tela
    printf("%.3f km/l\n", km/l);

    return 0;
}
