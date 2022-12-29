#include<stdio.h>
#include<stdlib.h>

int main ()
{
int numero, i;
int primo = 0;
printf("Digite um numero:\n");
scanf("%d", &numero);
for(i=3; i<=numero/3;i+=2){
    if(numero%2 == 0){
        primo ++;
        break;
    }
}
if(primo == 0){
    printf("%d e um numero primo.", numero);
}
else{
    printf("%d nao e um numero primo.", numero);
}
return 0;
}