#include<stdio.h>
#include<stdlib.h>

int scanIntIntervalo(){
    int digite;
    scanf("%d", &digite);
    while(digite<0 || digite>1000){
        printf("Numero nao permitido, o numero deve estar entre 0 e 1000.\n");
        printf("Digite um numero entre 0 a 1000:\n");
        scanf("%d", &digite);
    }
return digite;
}

void percentual(float x, float y){
    float porcentagem;
    if(x>y){
        porcentagem = (100*y)/x;
        printf("A porcentagem de %1.0f em relacao a %1.0f e de %1.2f\n", y, x, porcentagem);
    }else{
        porcentagem = (100*x)/y;
        printf("A porcentagem de %1.0f em relacao a %1.0f e de %1.2f\n", x, y, porcentagem);
    }
}

void absdif(int x, int y){
    int diferenca;
    if(x>y){
        diferenca = x - y;
        printf("%d menos %d e igual a %d", x, y, diferenca);
    }else{
        diferenca = y - x;
        printf("%d menos %d e igual a %d", y, x, diferenca);
    }
}

int main()
{
float x;
float y;
printf("Digite um numero entre 0 a 1000:\n");
x = scanIntIntervalo();
printf("Digite um numero entre 0 a 1000:\n");
y = scanIntIntervalo();
percentual(x, y);
absdif(x, y);
return 0;
}