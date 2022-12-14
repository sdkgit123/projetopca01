#include<stdio.h>
#include<stdlib.h>

int main ()
{
float base;
float altura;
printf("Digite a base do triangulo:");
scanf("%f", &base);
printf("Agora digite a altura do triangulo:");
scanf("%f", &altura);
float area;
area = (base * altura)/2;
printf("A area do seu triangulo é %1.2f", area);
return 0;
}