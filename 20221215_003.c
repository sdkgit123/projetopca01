#include<stdio.h>
#include<stdlib.h>

int main ()
{
float metro;
printf("converta metros para centimetros!\nquantos metros voce quer converter para centimetros?\n");
scanf("%f", &metro);
float centimetro;
centimetro = metro * 100;
printf("%1.1f metros sao %1.1f centimetros", metro, centimetro);
return 0;
}
