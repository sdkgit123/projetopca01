#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char equipes [5] [4] [500];
    int i, j, k;
    char nome [500];
    int tamanho;
    int soma = 0;

    for(i=0; i<5; i++){
        printf("Equipe %d:", i+1);
        printf("\n");
        for(j=0; j<4; j++){
            printf("Digite o nome e sobrenome do aluno:\n");
            gets(equipes[i] [j]);
        }
        printf("\n\n");
    }
    printf("Qual aluno voce deseja procurar?:\n");
    gets(nome);
    tamanho = strlen(nome);
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; i < 4; j++)
        {
            if(strcmp(nome, equipes[i][j])==0){
              printf("%s esta na equipe %d posicao %d", equipes [i] [j], i+1); 
            }
        }
        
    }
  return 0;  
}