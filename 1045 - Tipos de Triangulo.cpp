#include <cstdio>
#include <vector>    //std::vector
#include <iostream>  //std::cout
#include <algorithm> //std::sort
int main(){
    //Lados do triangulo
    double L1;
    double L2;
    double L3;
    double vec[3];
    int i = 0;

    //Capturando os valores
    printf("Digite os valores dos lados do triangulo\n");
    scanf("%lf %lf %lf", &vec[0], &vec[1], &vec[2]);

    std::vector<double> myvector (vec,vec + 3);
    std::sort (myvector.begin(), myvector.end());

    for(std::vector<double>::iterator it=myvector.begin();it!=myvector.end();++it){
        vec[i] =*it;
        i++;
    }
    L1 = vec[2];
    L2 = vec[1];
    L3 = vec[0];

    //Imprimindo os valores na tela
    if(L1 >= L2+L3)
        printf("NAO FORMA TRIANGULO\n");
    else{
        if (L1*L1 == (L2*L2 + L3*L3))
            printf("TRIANGULO RETANGULO\n");
        else if (L1*L1 > (L2*L2 + L3*L3))
            printf("TRIANGULO OBTUSANGULO\n");
        else if (L1*L1  < (L2*L2 + L3*L3))
            printf("TRIANGULO ACUTANGULO\n");

        if (L1 == L2 && L2 == L3)
            printf("TRIANGULO EQUILATERO\n");
        else if(L1 == L2 || L2 ==L3)
            printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}