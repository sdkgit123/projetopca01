#include<stdio.h>
#include<stdlib.h>

int main ()
{
float conta;
float garcom;
printf("Qual o valor da conta?:");
scanf("%f", &conta);
printf("Quantos porcento da conta vão para o garçom? (Escreva sem a porcentagem):");
scanf("%f", &garcom);
float desc_garcom;
float parte_garcom;
desc_garcom = conta * (garcom/100);
parte_garcom = desc_garcom;
printf("O valor da conta será R$%1.2f.\nA parcela da conta que irá para o garçom sera R$%1.2f", conta , parte_garcom);
return 0;
}