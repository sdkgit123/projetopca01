#include<stdio.h>
#include<stdlib.h>


void bubble_sort (int *valoum, int *valodois, int*valotres) {
    int k, j, aux;
    int array[3] = {*valoum, *valodois, *valotres};
    for (k = 1; k < 3; k++) {
        for (j = 0; j < 3 - 1; j++) {
            if (*(array+j) > *(array+j + 1)) {
                aux = *(array+j);
                *(array+j) = *(array+j + 1);
                *(array+j + 1) = aux;
    for(j=0; j<3; j++){
        printf("%d ", *(array+j));
                }
            }
        }
    }
}

int main(){
    int valoum, valodois, valotres;
    int i;
    printf("Digite tres numeros(separe por espaco):\n");
    scanf("%d %d %d", &valoum, &valodois, &valotres);
    bubble_sort(&valoum, &valodois, &valotres);
    return 0;
}