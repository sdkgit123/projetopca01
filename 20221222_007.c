#include<stdio.h>
#include<stdlib.h>

int main (){
int tempoto;
int tempoho;
int tempomi;
int tempose;
float massai;
float massaf;

  printf("Digite a massa do material radioativo (em gramas):\n");
  scanf("%f", &massai);
  massaf = massai;
  tempoto = 0;
  while (massaf >= 0.5) {
    massaf = massaf / 2;
    tempoto = tempoto + 50;
  }
  tempoho = (tempoto / 3600);
  tempomi = (tempoto % 3600) / 60;
  tempose = (tempoto % 3600) % 60;
  printf("Massa Inicial: %1.2f gramas.\n", massai);
  printf("Massa Final: %1.2f gramas.\n", massaf);
  printf("Tempo Total: %d segundos.\n", tempoto);
  printf("Tempo Dividido: %d horas:%d minutos:%d segundos.", tempoho, tempomi, tempose);
return 0;
}
