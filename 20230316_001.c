#include <stdio.h>
#include <stdlib.h>

void leveto(int **veto, int *numerosfo) {
    int i;
    printf("Quantos numeros voce quer que o vetor tenha?:\n");
    scanf("%d", numerosfo);

    while (*numerosfo <= 0) {
        printf("O tamanho do vetor deve ser um numero positivo.\n");
        printf("Quantos numeros voce quer que o vetor tenha?:\n");
        scanf("%d", numerosfo);
    }

    *veto = (int*) malloc (*numerosfo * sizeof(int));

    for(i=0; i<*numerosfo; i++){
        printf("Digite um numero:\n");
        scanf("%d", *veto+i);
    }
}

void maio_meno(int *veto, int numerosfo, int *maiomeno) {
    int i;
    maiomeno[0] = veto[0];
    maiomeno[1] = veto[0];
    for(i=0; i<numerosfo; i++){
        if (*(veto+i) > maiomeno[0]) {
            maiomeno[0] = *(veto+i);
        } 
        if (*(veto+i) < maiomeno[1]) {
            maiomeno[1] = *(veto+i);
        }
    }
}

int main(){
    int *veto, numerosfo, *maiomeno;

    leveto(&veto, &numerosfo);
    maiomeno = (int*) malloc(2 * sizeof(int));
    maio_meno(veto, numerosfo, maiomeno);

    printf("\nO maior numero e: %d\n", maiomeno[0]);
    printf("O menor numero e: %d\n", maiomeno[1]);

    free(veto);
    return 0;
}

