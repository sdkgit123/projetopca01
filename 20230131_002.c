#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char carros [5] [1] [200];
    int consu [5] [1];
    int consuvzs [5] [1];
    int i, j;
    int maior = 0;
    int menor = 0;
    for(i=0; i<5; i++){
        for(j=0; j<1; j++){
            printf("Digite o modelo do carro:\n");
            scanf("%s", &carros [i] [j]);
            printf("Digite quantos quilometros o carro percorre com 1 litro de combustivel:\n");
            scanf("%d", &consu [i] [j]);
        }
    }
    for(i=0; i<5; i++){
        for(j=0; j<1; j++){
            if(i==0){
                maior = consu[i] [j];
                menor = consu[i] [j];
            }else{
            if(consu[i] [j] > maior){
                maior = consu [i] [j];
            }else{
                if(consu[i] [j] < menor){
                    menor = consu [i] [j];
                }
            }
            }
        }
    }
    for(i=0; i<5; i++){
        for(j=0; j<1; j++){
            consuvzs[i] [j] = consu [i] [j] * 1000;
        }
    }
    for(i=0; i<5; i++){
        printf("\n");
        for(j=0; j<1; j++){
            printf("carro: %s, km percorridos por litro de gasolina: %d", carros[i] [j], consu [i] [j]);
        }
    }
    printf("\n\n");
    for(i=0; i<5; i++){
        for(j=0; j<1; j++){
            if(maior == consu [i] [j]){
                printf("O maior consumo e do carro %s, %d km percorridos com 1 litro de gasolina:\n", carros [i] [j], maior);
            }else{
                if(menor == consu [i] [j]){
                    printf("O menor consumo e do carro %s, %d km percorridos com 1 litro de gasolina:\n", carros [i] [j], menor);
                }
            }
        }
    }
    printf("\n");
    printf("Consumo de combustivel com 1000 km percorridos:");
    for(i=0; i<5; i++){
        printf("\n");
        for(j=0; j<1; j++){
            printf("%s: ", carros [i] [j]);
            printf("%d km", consuvzs [i] [j]);
        }
    }
    return 0;
}

