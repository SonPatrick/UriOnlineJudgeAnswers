#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main() {
    //Valores de A, B, C
    float A;
    float B;
    float C;
    //Valor de Delta
    float delta;
    //Resultados 
    float res1,res2;

    //Capturando os valores de A B C
    printf("Digite os valores de A, B e C\n");
    scanf("%f %f %f", &A, &B, &C);

    //D = Quadrado do B subtraido de Quatro vezes A vezes C
    delta = (B*B) - (4*A*C);

        if (delta < 0 || A == 0)
            printf("Impossivel calcular\n");

        else{
            // -B + Raiz (D /2xA)
            res1 = (-B + std::sqrt(delta))/(2*A);
            // -B - Raiz (D /2xA)
            res2 = (-B - std::sqrt(delta))/(2*A);

            //Imprimindo reultados na tela
            printf("Res1 = %.5f\n", res1);
            printf("Res2 = %.5f\n", res2);
        }
    
    return 0;
}
