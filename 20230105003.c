#include<stdio.h>
#include<stdlib.h>

int ler(){
    int digitar;
    scanf("%d", &digitar);
    while (digitar % 2 != 0)
    {
        printf("Numero nao permitido, o numero digitado deve ser par.\n");
        printf("Digite um numero:\n");
        scanf("%d", &digitar);
    }
return digitar;
}

void perfeito(int numero){
    int i;
    int soma = 0;
    for(i = 1; i <= numero/2; i++){
        if(numero % i == 0){
            soma = soma + i;
        }
    }
    if(soma == numero){
        printf("O numero e perfeito.");
    }else{
        printf("O numero nao e perfeito.");
    }
}

int main()
{
int numero;
printf("Digite um numero:\n");
numero = ler();
perfeito(numero);
return  0;
}