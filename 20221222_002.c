#include<stdio.h>
#include<stdlib.h>

int main ()
{
float numeros = 0;
float i;
float menor = 78543636354757867;
float maior=0;
float soma = 0;
for(i=0; i<5; i++){
printf("Digite um numero:\n");
scanf("%f", &numeros);
if(numeros>maior){
    maior = numeros;
}
if(numeros<menor){
    menor=numeros;
}
soma = soma + numeros;
}
printf("O maior numero e %1.1f\n", maior);
printf("O menor numero e %1.1f\n", menor);
printf("O resultado da soma e %1.1f", soma);
return 0;
}