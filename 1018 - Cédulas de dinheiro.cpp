#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main() {
    //vetor que armazena as cédulas
    int v[7]={100,50,20,10,5,2,1};
    int rest;
    int i = 0;

    printf("Digite o valor do dinheiro\n");
    scanf("%d", &rest);
    printf("%d\n", rest);

    for (i = 0;i<7;i++){
        
        printf("%d nota(s) de R$ %d,00\n", rest/v[i], v[i]);
        rest = rest%v[i];

    }

    return 0;
}
