#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    int num1;
    int num2;
    int num3;
    int maior;

    //Inserção dos números
    printf("DIGITE O VALOR DOS TRÊS NÚMEROS\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    //Extrai o maior número
    maior = (num1 + num2 + std::abs(num1 - num2)) / 2;
    maior = (maior + c + std::abs(maior - num3)) / 2;

    //Imprime o maior número na tela
    printf("%d maior número \n", maior);
}
