#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mediadesvio(float **veto, int *quantos, float *media, float *desvio){
    int i;
    float somam = 0;
    float somad = 0;
    float sub = 0;
    for(i=0; i<*quantos; i++){
        somam = somam + *(*veto+i);
    }
    *media = somam/ *quantos;
    for(i=0; i<*quantos; i++){
        sub = sub + pow(((*(*veto+i)) - *media), 2);
    }
    *desvio = sqrt(sub/(*quantos - 1));
    printf("A media sera: %1.2f e o desvio padrao sera: %1.2f\n", *media, *desvio);
}

int main(){
    int quantos;
    float *veto;
    float media;
    float desvio;
    int i;
    printf("Quantos alunos voce quer cadastrar?\n");
    scanf("%d", &quantos);
    veto = (float*)malloc(quantos*sizeof(float));
    for(i=0; i<quantos; i++){
        printf("Digite a nota do %dº aluno(a):\n", i +1);
        scanf("%f", &(*(veto+i)));
    }
    mediadesvio(&veto, &quantos, &media, &desvio);
    return 0;
}

