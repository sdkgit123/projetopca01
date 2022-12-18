#include<stdio.h>
#include<stdlib.h>

int main ()
{
float notaum;
float notadois;
float notatres;
float notaquatro;
printf("Digite as notas do aluno (Separe as notas por espaco):\n");
scanf("%f %f %f %f", &notaum, &notadois, &notatres, &notaquatro);
float nota;
nota = (notaum + notadois + notatres + notaquatro)/4;
printf("%1.2f", nota);
return 0;
}