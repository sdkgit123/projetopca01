#include<stdio.h>
#include<stdlib.h>
#define VERDADEIRO 1
#define FALSO 0

int main() {
  int comhipo;
  int catetoum;
  int catetodois;
  int hipotenusa;
  int achou;

  printf("Digite o comprimento da hipotenusa que deseja calcular:\n");
  scanf("%d" , &comhipo);

  for (hipotenusa = 1; hipotenusa <= comhipo; hipotenusa++) {
    achou = FALSO;
    for (catetoum = 1; catetoum < hipotenusa && !achou; catetoum++) {
      catetodois = catetoum; 
      while (catetoum*catetoum + catetodois*catetodois < hipotenusa*hipotenusa)
	catetodois++;
      if (catetoum*catetoum + catetodois*catetodois == hipotenusa*hipotenusa){
	printf("quando ahipotenusa e %d, os catetos serao %d e %d\n", hipotenusa, catetoum, catetodois);
	achou = VERDADEIRO;
      }
    }
  }

  return 0;
}
