#include<stdio.h>
#include<stdlib.h>

int main ()
{
float raio;
printf("Descubra a area de um circulo a partir do seu raio!\nDigite o raio do circulo:\n");
scanf("%f", &raio);
float area;
area = 3.14 * (raio * raio);
printf("A area de um circulo de raio %1.2f e %1.2f\n", raio, area);
return 0;
}
