#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    //Vetor que armazena numero de dias do ano e do mes
    int v[2] = {365,30};
    int d;
    int i;

    //Captando os dados
    printf("Digite sua idade : \n");
    scanf("%d", &d);

    //Imprimindo os anos
    printf("%d ano(s)\n",  d/365);
    d = d%365;
    //Imprimindo os meses
    printf("%d mes(es)\n",  d/30);
    d = d%30;
    //imprimindo os dias
    printf("%d dia(s)\n",  d);

    return 0;
}
