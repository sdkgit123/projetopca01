#include<stdio.h>
#include<stdlib.h>

int main ()
{
int i=0;
float numerador;
float denominador = 1;
int x=0;
float soma=0;
float divisao;
for(numerador=1; numerador<100; numerador+=2){
    divisao= (numerador/denominador);
    soma = soma + divisao;
    denominador = denominador + 1;
}
printf("%1.2f", soma);
return 0;
}