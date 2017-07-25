#include <cstdio>

int main(){
    int inicio;
    int fim;

	//Capturando dados
    printf("Digite o tempo de inicio e fim do jogo para ver a duração\n");
    scanf("%d %d",&inicio, &fim);

	    if(fim<= inicio)
	        fim+= 24;

    //Imprimindo o resultado
    printf("O JOGO DUROU %d HORA(S)\n", fim-inicio);
    return 0;
}