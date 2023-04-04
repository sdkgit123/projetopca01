#include<stdio.h>
#include<stdlib.h>

/*POR ARITMETICA DE PONTEIROS*/

int *valo(int *veto, int *numerosfo){
    int i;
    int maio, meno, media;
    int soma = 0;
    int *valos;
    valos = (int*) malloc(3*sizeof(int));
    for(i=0; i<*numerosfo; i++){
        if(i==0){
            maio = *(veto+i);
            meno = *(veto+i);
        } else if(*(veto+i)<meno){
            meno = *(veto+i);
        } else if(*(veto+i)>maio){
            maio = *(veto+i);
        }
        soma = soma + *(veto+i);
    }
    media = soma / *numerosfo;
    for(i=0; i<3; i++){
        if(i==0){
            *(valos+i) = maio;
        } else if(i==1){
            *(valos+i) = meno;
        } else if(i==2){
            *(valos+i) = media;
        }
    }
    return valos;
}

int main(){
    int numerosfo;
    printf("Quantos numeros voce quer digitar?");
    scanf("%d", &numerosfo);
    int veto[numerosfo];
    int i;
    int *valos;
    valos = (int*) malloc(3*sizeof(int));
    for(i=0; i<numerosfo; i++){
        printf("Digite um numero:\n");
        scanf("%d", (veto+i));
    }
    valos = valo(veto, &numerosfo);
    for(i=0; i<3; i++){
        if(i==0){
            printf("%d ", *(valos+i));
        }else if(i==1){
            printf("%d ", *(valos+i));
        } else{
            printf("%d ", *(valos+i));
        }
    }
    free(valos);
    return 0;
}

/*POR INDEXES*/

#include<stdio.h>
#include<stdlib.h>

int *valo(int *veto, int *numerosfo){
    int i;
    int maio, meno, media;
    int soma = 0;
    int *valos;
    valos = (int*) malloc(3*sizeof(int));
    for(i=0; i<*numerosfo; i++){
        if(i==0){
            maio = veto[i];
            meno = veto[i];
        } else if(veto[i]<meno){
            meno = veto[i];
        } else if(veto[i]>maio){
            maio = veto[i];
        }
        soma = soma + veto[i];
    }
    media = soma / *numerosfo;
    for(i=0; i<3; i++){
        if(i==0){
            valos[i] = maio;
        } else if(i==1){
            valos[i] = meno;
        } else if(i==2){
            valos[i] = media;
        }
    }
    return valos;
}

int main(){
    int numerosfo;
    printf("Quantos numeros voce quer digitar?");
    scanf("%d", &numerosfo);
    int veto[numerosfo];
    int i;
    int *valos;
    valos = (int*) malloc(3*sizeof(int));
    for(i=0; i<numerosfo; i++){
        printf("Digite um numero:\n");
        scanf("%d", &veto[i]);
    }
    valos = valo(veto, &numerosfo);
    for(i=0; i<3; i++){
        if(i==0){
            printf("%d ", valos[i]);
        }else if(i==1){
            printf("%d ", valos[i]);
        } else{
            printf("%d ", valos[i]);
        }
    }
    free(valos);
    return 0;
}

/*RETIRE UM DOS CODIGOS E TESTE, OS DOIS JUNTOS NAO FUNCIONAM*/