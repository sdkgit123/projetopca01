#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void pari(int *ate){
        int conta = 0;
        conta = pow(2*(*ate), 2) - 1;
        printf("%d\n", conta);

}

void pgeo(int *ate, int *pte, int *raz){
    int conta = 0;
    conta = conta + *pte * pow(*raz, *ate-1);
    printf("%d", conta);
}

int main(){
    int pos;
    printf("Em que posicao voce gostaria de calcular a P.A?\n");
    scanf("%d", &pos);
    pari(&pos);
    int ptermo;
    int razao;
    printf("Em que posicao voce gostaria de calcular a P.G?\n");
    scanf("%d", &pos);
    printf("Qual o primeiro termo da P.G?\n");
    scanf("%d", &ptermo);
    while(ptermo>pos){
        printf("O primeiro termo nao pode ser maior que o termo que voce quer calcular.\n");
        printf("Qual o primeiro termo da P.G?\n");
        scanf("%d", &ptermo);
    }
    printf("Qual a razao da P.G?\n");
    scanf("%d", &razao);
    pgeo(&pos, &ptermo, &razao);
    return 0;
}