#include <stdio.h>
#include <stdlib.h>

int main() {
int n;
int p; 
int i;
int in;
int soma;

printf("Digite o valor de p:\n");
scanf("%d", &p);
printf("Soma dos impares consecutivos de 1 elevado ao cubo a %d elevado ao cubo:\n", p);
for (n = 1; n <= p; n++) {
    soma = 0;
    for (in = 1; soma != n * n * n; in = in + 2) {
      soma = 0;
      for (i = 0; i < n; i++)
	soma = soma + in + 2 * i;
    }
    in = in - 2;
    printf("%d*%d*%d = %d", n, n, n, in);
    for (i = 1; i < n; i++)
      printf("+%d", in+2*i);
      printf("\n"); 
  }
  return 0;
}