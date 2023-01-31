#include<stdio.h>
#include<stdlib.h>

int main ()
{
int numeroum;
int numerodois;
float numeroreal;
printf("Digite 2 numeros inteiros e um numero real (Separe os numeros com espaco):\n");
scanf("%i %i %f", &numeroum, &numerodois, &numeroreal);
int contaum;
contaum = (numeroum * 2) * (numerodois / 2);
float contadois;
contadois = (numeroum * 3) + (numeroreal);
float contatres;
contatres = numeroreal * numeroreal * numeroreal;
printf("Produto do dobro do primeiro numero com a metade do segundo: %i\n", contaum);
printf("Soma do triplo do primeiro numero com o terceiro numero: %1.2f\n", contadois);
printf("Terceiro numero elevado ao cubo: %1.2f", contatres);
return 0;
}
