#include<stdio.h>
#include<stdlib.h>

int main ()
{
float salario;
float porcentagem;
printf("digite seu salario:");
scanf("%f", &salario);
printf("Digite a porcentagem do aumento do salario (sem o sinal da porcentagem):");
scanf("%f", &porcentagem);
float aumento;
float novosal;
aumento = salario * (porcentagem/100);
novosal = salario + aumento;
printf("Seu salário com aumento será R$%1.2f", novosal);
return 0;
}
