#include <stdio.h>

int main() 
{
  int n;
  int m;         
  int x;
  int y;
  int valor;
  int xmax = 0;
  int ymax = 0;
  int valormax = 0;

  printf("Digite dois numeros (separe os com espaco):\n");
  scanf ("%d %d", &n, &m);
  for (x = 0; x <= n; x++) 
    {
      for (y = 0; y <= m; y++) 
	{
          valor = x*y - x*x + y;
          if (valor > valormax)
	    {
              valormax = valor;
              xmax = x;
              ymax = y;
	    }
	}  
    }
  
  printf("O maior valor da funcao e %d\nOs valores das variaveis sao x = %d e y = %d", 
          valormax, xmax, ymax);
    
  return 0;
} 