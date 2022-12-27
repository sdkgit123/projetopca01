#include<stdio.h>
#include<stdlib.h>

int main ()
{
int numeros = 0;
int somapa = 0;
int somaimpa = 0;
while(numeros < 1000){
printf("Digite um numero:\n");
scanf("%d", &numeros);
if(numeros % 2 == 0 && numeros > 0){
    somapa = somapa + numeros;
}
if(numeros % 2 != 0 && numeros > 0){
    somaimpa = somaimpa + numeros;
}
}
printf("Soma dos pares: %d\n", somapa);
printf("Soma dos impares: %d", somaimpa);
return 0;
}