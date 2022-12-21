#include<stdio.h>
#include<stdlib.h>

int main ()
{
int numeros;
int soma = 0;
int i;
for(i=0; i<50; i++){
    printf("Escreva um numero:\n");
    scanf("%d", &numeros);
    if(numeros%2!=0)
    {
        soma = soma + numeros;
    }
    else
    {
        
    }
}
printf("Resultado da soma dos impares: %d", soma);
return 0;
}