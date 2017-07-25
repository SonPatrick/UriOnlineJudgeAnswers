#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
#define cons 12.00

int main() {
    int h, vm;

    printf("Digite o valor de horas\n");
    scanf("%d", &h); 
    printf("Digite o valor de velocidade média\n");
    scanf("%d", &vm); 

    //Imprimindo dados na tela
    printf("%.3f\n", (vm*h)/cons);

    return 0;
}
