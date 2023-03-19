#include<stdio.h>
#include<stdlib.h>

int main(){
    int inteiro = 5;
    float real = 9.3;
    char carac = 'v';
    int *pontum = &inteiro;
    float *pontois = &real;
    char *pontres = &carac;
    printf("%d %1.1f %c", *pontum, *pontois, *pontres);
    *pontum = 8;
    *pontois = 4.9;
    *pontres = 'p';
    printf("%d %1.1f %c", *pontum, *pontois, *pontres);
    return 0;    
}