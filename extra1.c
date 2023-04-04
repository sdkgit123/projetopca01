#include<stdio.h>
#include<stdlib.h>

void caum(float *ate){
    float p = 1;
    float conta = 0;
    while(p<*ate){
        conta = conta + 1/p;
        p++;
    }
    printf("%1.2f\n", conta);
}

void cadois(float *ate){
    float p = 1;
    float conta = 0;
    while(p<*ate){
        conta = conta + 1/(p+1);
        p++;
    }
    printf("%1.2f", conta);
}

int main(){
    float ate;
    printf("Ate que numero voce gostaria de calcular?:\n");
    scanf("%f", &ate);
    caum(&ate);
    cadois(&ate);
    return 0;
}