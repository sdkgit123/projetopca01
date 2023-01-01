#include<stdio.h>
#include<stdlib.h>

int main ()
{
float numeros = 0;
float i;
float menor;
float maior;
for(i=0; i<5; i++){
printf("Digite um numero:\n");
scanf("%f", &numeros);
if( i == 0){
maior = numeros;
menor = numeros;
}
if(numeros>=maior){
    maior = numeros;
}
if(numeros<=menor){
    menor=numeros;
}
}
printf("O maior numero e %1.1f\n", maior);
printf("O menor numero e %1.1f\n", menor);
return 0;
}