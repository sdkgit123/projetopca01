#include <stdio.h>
#include <stdlib.h>

int ler(int num){
    int aux;
    printf("Qual o tamanho da matriz cidade?\n");
    scanf("%d", &num);
    printf("Entao sua matriz possui %d cidades? (1 para sim, 2 para nao):\n", num*num);
    scanf("%d", &aux);
    if(aux == 1){
    	return num;
	}
    while(aux == 2 || aux !=1 || aux !=2){
        printf("Qual o tamanho da matriz cidade?\n");
        scanf("%d", &num);
        printf("Entao sua matriz possui %d cidades? (1 para sim, 2 para nao):\n", num*num);
        scanf("%d", &aux);
        if(aux == 1){
        	break;
		}
    }
    return num;
}

int main(){
    int numerosfo = ler(numerosfo);
    int matriz [numerosfo] [numerosfo];
    int i,j;
    int quantas;
    int cidi;
    int cidj;
    int soma = 0;
    for(i=0; i<numerosfo; i++){
        for(j=0; j<numerosfo; j++){
            printf("Digite o custo do intinerario da cidade %d %d:\n", i+1, j+1);
            scanf("%d", &matriz[i] [j]);
        }
    }
    printf("Voce deseja viajar por quantas cidades?\n");
    scanf("%d", &quantas);
    for(i=0; i<quantas-1; i++){
        printf("Digite as coordenadas da cidade que deseja viajar (separe por espaço):\n");
        scanf("%d %d", &cidi, &cidj);
        if(cidi>numerosfo || cidj>numerosfo){
        	printf("Coordenada nao permitida.\n");
        	printf("Digite as coordenadas da cidade que deseja viajar (separe por espaço):\n");
        	scanf("%d %d", &cidi, &cidj);
		}
		soma = soma + matriz[cidi- 1] [cidj - 1];
    }
    printf("O custo da viagem sera de R$ %d.", soma);
    return 0;
}
