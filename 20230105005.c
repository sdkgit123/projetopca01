#include <stdio.h>
#include <stdlib.h>

int fib(int n){
	int i;
	int fibo=1;
	int fibodois=0;
	int soma = 0;
	for(i=1; i<=n; i++){
		soma = soma + fibo;
		fibo = fibodois;
		fibodois = soma;
	}
	printf("O numero %d da sequencia de Fibonacci e %d.", n, soma);
	return soma;		
}

int main(int argc, char *argv[]) {
	int numero;
	printf("Digite um numero:\n");
	scanf("%d", &numero);
	fib(numero);
	return 0;
}
