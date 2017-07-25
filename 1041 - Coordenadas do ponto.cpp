#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	//Valores das coordenadas
	float x;
	float y;

	//Capturando os dados das coordenadas
	printf("Digite os valores das coordenadas para mostrar o quadrante\n");
	scanf("%f %f",&x, &y);

		//Obtendo informações sobre o quadrante
		if(x>0){
			if(y<0)
				printf("Quadrante 4\n");
			else if(y>0)
				printf("Quadrante 1\n");
			else
				printf("Eixo X\n");
		}

		else if(x < 0){
			if(y<0)
				printf("Quadrante 3\n");
			else if(y>0)
				printf("Quadrante 2\n");
			else
				printf("Eixo X\n");
		}
		
		else{
			if(y==0)
				printf("Origem\n");
			else
				printf("Eixo Y\n");
		}

return 0;
}
