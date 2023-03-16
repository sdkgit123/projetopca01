#include<stdio.h>
#include<stdlib.h>

void pocorrencia(int *num, int *otonum){
    int dig;
    int soma = 0;
    printf("Qual numero voce gostaria de verificar?\n");
    scanf("%d", &dig);
    for(; num<otonum; num++){
        if(*num == dig){
            printf("O numero %d aparece no endereco %d\n", dig, num);
            soma ++;
            break;
        }
    }
    if(soma == 0){
        printf("Nao ha nenhum registro desse numero no vetor.\n");
    }
}

void ocorrencia(int *num, int *otonum){
    int dig;
    int soma = 0;
    printf("Qual numero voce gostaria de verificar?\n");
    scanf("%d", &dig);
    for(; num<otonum; num++){
        if(*num == dig){
            printf("O numero %d aparece no endereco %d\n", dig, num);
            soma ++;
        }
    }
    if(soma == 0){
        printf("Nao ha nenhum registro desse numero no vetor.");
    }
}

int main(){
    int numeros [10] = {9, 4, 2, 6, 2, 7, 1, 2, 5, 7};
    pocorrencia(&numeros[0], &numeros[10]);
    ocorrencia(&numeros[0], &numeros[10]);
    return 0;
}