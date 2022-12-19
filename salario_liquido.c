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
float sindicato;
float renda;
float inss;
float liquido;
salario = por_hora * por_mes;
renda = salario * 11/100;
inss = salario * 8/100;
sindicato = salario * 5/100;
liquido = salario - (renda + inss + sindicato);
printf("Seu salario bruto sera de %1.2fR$ ao final do mes\n", salario);
printf("Voce pagou %1.2fR$ ao inss\n", inss);
printf("Voce pagou %1.2fR$ ao sindicato\n", sindicato);
printf("Seu salario liquido sera de %1.2fR$ ao final do mes.", liquido);
return 0;
}