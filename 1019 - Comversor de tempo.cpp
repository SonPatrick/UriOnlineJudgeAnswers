#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main() {
    int a;
    //Captando os valores 
    printf("Digite o ano\n");
    scanf("%d", &a);

    //Imprimindo os valores na tela
    printf("%d:%d:%d\n", a/3600, (a%3600)/60, (a%3600)%60);

    return 0;
}
