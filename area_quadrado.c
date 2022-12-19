#include<stdio.h>
#include<stdlib.h>

int main ()
{
float lado;
printf("Digite o tamanho da base e altura do seu quadrado:\n");
scanf("%f", &lado);
float quadrado;
quadrado = lado * lado;
printf("O area do quadro e igual a %1.2f\n", quadrado);
float dobro;
dobro = quadrado * 2;
printf("O dobro da area do quadrado e igual a %1.2f", dobro);
return 0;
}