#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void aocontra(char palavra[200]){
    int tamanho;
    int tamanhodois;
    printf("Sua palavra escrita ao contrario:\n");
    tamanho = strlen(palavra);
    tamanhodois = tamanho;
    int i=tamanhodois;
    while(i >= 0){
        printf("%c", palavra[i]);
        i--;
    }
    printf("\n");
}

void semvogau(char palavra[200]){
    int i, j;
    int k=0;
    int l=0;
    int tamanho;
    int soma = 0;
    char vogais [] = "aeiouAEIOU";
    int vogal;
    printf("Sua palavra sem vogais:\n");
    tamanho = strlen(palavra);
    vogal = strlen(vogais);
    int conta [tamanho];
    for(i=0; i<=tamanho;i++){
        conta[i] = 0;
        for(j=0; j<vogal; j++){
        if(palavra[i] != vogais[j]){
            conta[i]++;
        }
        }
        }
        while(k<tamanho){
            if(conta[k] == vogal){
                printf("%c", palavra[k]);
            }
            k++;
        }
    printf("\n");
}

void maiusculo(char palavra[200]){
    int i;
    int tamanho;
    printf("Sua palavra em maiusculo:\n");
    tamanho = strlen(palavra);
    char maius[tamanho+1];
    for(i=0; i<tamanho; i++){
        maius[i] = toupper(palavra[i]);
    }
    for(i=0; i<tamanho+1; i++){
    printf("%c", maius[i]);
    }
    printf("\n");
}

void caractere(char palavra[200]){
    int i;
    int tamanho;
    char caracte;
    int soma = 0;
    printf("Digite o caractere que voce quer analisar:\n");
    scanf("%s", &caracte);
    tamanho = strlen(palavra);
    for(i=0; i<tamanho; i++){
        if(palavra[i] == caracte){
            soma++;
        }
    }
    printf("O caractere %c aparece %d vezes na palavra ", caracte, soma);
    for(i=0;i<tamanho;i++){
        printf("%c", palavra[i]);
    }
    printf(".\n");
}

void apagacaract(char palavra [200]){
    int i = 0;
    int j;
    int k;
    char caracte[2];
    int tamanho;
    char palavrac[200];
    printf("Digite o caractere que voce quer retirar:\n");
    scanf("%s", &caracte);
    printf("Sua palavra sem o caractere %c:\n", caracte);
    tamanho = strlen(palavra);
    for(k=0; k<tamanho; k++){
        for(j=0; j<=0; j++){
            if(palavra[k] != caracte[j]){
                printf("%c", palavra[k]);
            }
        }
    }
}

int main(){
    char palavra [200];
    char cara;
    printf("Digite uma palavra:\n");
    scanf("%s", &palavra);
    aocontra(palavra);
    semvogau(palavra);
    maiusculo(palavra);
    caractere(palavra);
    apagacaract(palavra);
    return 0;
}