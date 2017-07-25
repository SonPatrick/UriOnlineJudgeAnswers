#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main() {
    float x1;
    float x2;
    float y1;
    float y2;

    //Captando os valores
    printf("Insira os valores referentes À distância :");
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);

    //Imprimindo valores na tela
    printf("%.4f\n", std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
    
    return 0;
}
