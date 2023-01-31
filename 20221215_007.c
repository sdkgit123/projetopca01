#include<stdio.h>
#include<stdlib.h>

int main ()
{
float fahrenheit;
printf("Digite a temperatura em Farenheit que voce quer transformar em Celsius:\n");
scanf("%f", &fahrenheit);
float celsius;
celsius = (5 * (fahrenheit - 32) / 9);
printf("%1.2f graus Fahrenheit = %1.2f graus Celsius.", fahrenheit, celsius);
return 0;
}
