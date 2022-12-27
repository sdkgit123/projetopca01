#include<stdio.h>
#include<stdlib.h>

int main(){
	int i=0;
	int maior=0;
	int menor;
	int b=0;
	while(b<20){
		 printf("Escreva um numero");
		 scanf("%d", &i);
		 if(i > maior){
		 	maior = i;
		 }
		 if(i<menor){
		 	menor = i;
		 }
		 b++;
	}
	printf("O maior numero e: %d\n", maior);
	printf("O menor numero e: %d\n", menor);
	return 0;
}