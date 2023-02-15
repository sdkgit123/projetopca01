#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra[500];
    char palavrase[500];
    int j=0;
    int k;
    int l=0;
    char palavrac[500];
    int tamanho;
    int tamanhodo;
    int soma = 0;

    printf("Digite uma palavra ou frase:\n");
    gets(palavra);
    tamanho = strlen(palavra);
    for(k=0; k<tamanho; k++){
        if(palavra[k] == ' '){
        }else{
            palavrase[l] = palavra[k];
            l++;
        }
    } 
    tamanhodo = strlen(palavrase);
    int i=tamanhodo - 1; 
    while(i>=0){
        palavrac[j] = palavrase[i];
        i--;
        j++;
    }
    for(i=0; i<tamanhodo; i++){
    if(palavrase[i] == palavrac[i]){
       soma++; 
    }
    }
    if(soma == tamanhodo){
        printf("A palavra/frase e um palindromo.");
    }else{
        printf("A palavra/frase nao e um palindromo.");
    }
    return 0;
}