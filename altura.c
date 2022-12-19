#include<stdio.h>
#include<stdlib.h>

int main ()
{
float altura;
printf("Digite sua altura:\n");
scanf("%f", &altura);
float ideal;
ideal = (72.7 * altura) - 58;
printf ("Seu peso ideal sera de %1.2f kg", ideal);
return 0;
}