#include<stdio.h>
#include<stdlib.h>

int main ()
{
float por_hora;
printf("Quanto voce ganha por hora?\n");
scanf("%f", &por_hora);
int por_mes;
printf("E quantas horas voce trabalhou no mes?\n");
scanf("%i", &por_mes);
float salario;
salario = por_hora * por_mes;
printf("Voce recebera %1.2fR$ no final do mes", salario);
return 0;
}