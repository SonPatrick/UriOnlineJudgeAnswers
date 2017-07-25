#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    //Notas;
    float n1;
    float n2;
    float n3;
    float n4;
    float media;
    float notaex;

    //Capturando dados 
    printf("Digite os valores das quatro provas do aluno\n");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media= (n1*2+n2*3+n3*4+n4*1)/10;

    //Imprimindo a média
    printf("Media: %.1f\n", media);

    if (media >= 7)
        printf("Aluno aprovado.\n");
    else if(media < 5)
        printf("Aluno reprovado.\n");
    else{
        printf("Aluno em exame.\n");
        scanf("%f", &notaex);
        printf("Nota do exame: %.1f\n", notaex);
        media=(media+notaex)/2;
        
        if(media >= 5)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");

        printf("Media final: %.1f\n", media);
    }
}
