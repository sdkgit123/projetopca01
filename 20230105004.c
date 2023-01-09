#include<stdio.h>
#include<stdlib.h>

int fat(int n){
    int i=1;
    int multi = 2;
    while(multi <= n){
        i = multi * i;
        multi++;
    }
printf("%d! = %d", n, i);
return i;
}

int main ()
{
int numero;
printf("Digite um numero:\n");
scanf("%d", &numero);
fat(numero);
return 0;
}