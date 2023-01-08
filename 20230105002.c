#include<stdio.h>
#include<stdlib.h>

int ler(){
	int digite;
	scanf("%d", &digite);
return digite;
}

void partos(int gramas, int semanas){
	if(gramas<100 || semanas<28){
		printf("Parto nao devera ser realizado, reavaliar clinicamente.");
	}else{
		if(gramas>2500 && semanas>28){
			printf("Parto normal");
		}else{
			if(gramas>2500 && semanas <= 28){
				printf("Parto cesaria");
			}else{
				if(gramas<2000 && gramas>1500 && semanas>=36){
					printf("Parto normal");
				}else{
					printf("Parto cesaria");
				}
			}
		}
	}
}

int main ()
{
int peso;
int meses;
printf("Digite o peso do feto (em gramas):\n");
peso = ler();
printf("Digite as semanas do feto:\n");
meses = ler();
partos(peso, meses);
return 0;
}
