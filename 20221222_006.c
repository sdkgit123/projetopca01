#include<stdio.h>
#include<stdlib.h>

int main ()
{
int numero;
int digitar;
int soma=0;
int perfeito;
printf("Digite um numero:\n");
scanf("%d", &digitar);
for(numero=1; numero<=digitar/2; numero++){
    if(digitar%numero==0){
        soma = soma + numero;
    }
}
if(soma==digitar){
    printf("%d e perfeito", digitar);
}
if(soma!=digitar || digitar%2!=0){
    printf("%d nao e perfeito", digitar);
}
return 0;
}