#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int A;
    int B;
    int M;

    //Capturando os valores
    printf("Digite dois valores\n");
    scanf("%d %d", &A, &B);

    M = (A + B + std::abs(A - B)) / 2;

    //Imprimindo os valores na tela
    if (M%A==0 && M%B==0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");
}
