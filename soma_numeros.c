#include<stdio.h>
#include<stdlib.h>

int main ()
{
float numeroum;
float numerodois;
printf("digite um numero:\n");
scanf("%f", &numeroum);
printf("Digite outro numero:\n");
scanf("%f", &numerodois);
float soma;
soma = numeroum + numerodois;
printf("%1.1f + %1.1f = %1.1f", numeroum, numerodois, soma);
return 0;
}