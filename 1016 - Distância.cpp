#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main() {
    int km;
    
    //Captando valores digitados
    printf("Digite a distância em Km");
    scanf("%d", &km);

    //Imprimindo os valores na tela
    printf("%d minutos\n", (km*(60/30)));

    return 0;
}
