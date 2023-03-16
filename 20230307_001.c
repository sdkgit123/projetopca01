#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void flo(float *num, float *otonum){
    int i;
    for(; num<otonum; num++){
        printf("%1.2f\n", *num);
    }

}

int main(){
    int quantos;
    int i = 0;
    int j;
    while(i<3){
    printf("Digite o tamanho que voce quer que o vetor tenha:\n");
    scanf("%d", &quantos);
    while(quantos<0){
        printf("Numero nao permitido.");
        printf("Digite o tamanho que voce quer que o vetor tenha:\n");
        scanf("%d", &quantos);
    }
    float veto [quantos];
    for(j=0; j<quantos; j++){
        printf("Digite um numero:\n");
        scanf("%f", &veto[j]);
        }
    flo(&veto[0], &veto[quantos]);
    i++;
    }
    return 0;
}