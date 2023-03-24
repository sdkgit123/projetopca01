#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 500

int* palavra(char *pal, char letra, int *nfo){
    int i, soma = 0;
    int *enderecos;
    for(i=0; i<*nfo; i++){
        if(*(pal+i) == letra){
            soma++;
        }
    }
    enderecos = (int*)malloc(soma*sizeof(int));
    int j = 0;
    for(i=0; i<*nfo; i++){
        if(*(pal+i) == letra){
            *(enderecos+j) = (int)(pal+i);
            j++;
        }
    }
    printf("Total de letras iguais encontradas: %d\n", soma);
    return enderecos;
}

int main(){
    char pal[MAX];
    char letra;
    int *veto;
    int numerosfo;
    int soma;
    int i;
    printf("Digite uma palavra ou frase:\n");
    gets(pal);
    printf("Digite a letra que voce quer analisar:\n");
    scanf("%c", &letra);
    numerosfo = strlen(pal);
    veto = palavra(pal, letra, &numerosfo);
    soma = numerosfo;
    for(i=0; i<soma; i++){
        printf("%d\n", veto[i]);
    }
    return 0;
}

