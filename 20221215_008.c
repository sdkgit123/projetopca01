#include<stdio.h>
#include<stdlib.h>

int main ()
{
float celsius;
printf("Digite a temperatura em Celsius que voce quer transformar em Farenheit:\n");
scanf("%f", &celsius);
float fahrenheit;
fahrenheit = (celsius * 9/5) + 32;
printf("%1.2f graus Celsius = %1.2f graus Fahrenheit.", celsius, fahrenheit);
return 0;
}
