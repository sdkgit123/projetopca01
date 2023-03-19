#include<stdio.h>
#include<stdlib.h>

int main(){
    int array[8];
    int i;
    for(i=0; i<8; i++){
        printf("Digite um numero:\n");
        scanf("%d", array+i);
    }
    for(i=0; i<8; i++){
        printf("O dobro de %d e %d\n", *(array+i), *(array+i)*2);
    }
    for(i=0; i<8; i++){
        if(*(array+i)%2 == 0){
            printf("Endereco de %d e %d\n", *(array+i), array+i);
        }
    }
    return 0;
}