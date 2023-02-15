#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char palavra[500];
    int i, j;
    int tamanho;
    printf("Digite uma palavra:\n");
    gets(palavra);
    tamanho = strlen(palavra);
    for(i=0; i<tamanho; i++){
        if(palavra[i]=='x'){
            palavra[i] = 'a';
        } else if(palavra[i] == 'y'){
            palavra[i] = 'b';
        }else if(palavra[i]=='z'){
            palavra[i] = 'c';
        }else if(palavra[i] == ' '){
            palavra[i] = ' ';
        }else{
        palavra[i] += 3;
    }
    }
    for(i=0; i<tamanho; i++){
    palavra[i] = toupper(palavra[i]);
    }
    printf("%s", palavra);
    return 0;
}