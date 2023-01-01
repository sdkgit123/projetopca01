#include<stdio.h>
#include<stdlib.h>

int main ()
{
int i;
float x = 2;
int digite;
printf("Digite um numero:\n");
scanf("%d", &digite);
for(i=1;i<=digite;i++){
    x = x - (x*x-digite)/(2*x);
}
printf("A raiz quadrada de %d e %1.2f", digite, x);
return 0;
}