#include<stdio.h>
#include<stdlib.h>

int main ()
{
int soma = 0;
	int num;
	int i;
	for (i=0; i<5; i++){
		printf("Escreva um numero: ");
		scanf("%d", &num);
		soma = soma + num;
	}
	printf("%d", soma);
    return 0;
}