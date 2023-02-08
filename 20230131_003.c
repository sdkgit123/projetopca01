#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char data[11];
    int dia;
    int mes;
    int ano;
    int i;
    printf("Digite uma data no formato DD/MM/AAAA:\n");
    scanf("%s", &data);
    while(data[2] != '/' || data[5] != '/' || strlen(data)<10 || strlen(data)>=11){
        printf("Digite a data corretamente.\n");
        printf("Digite uma data no formato DD/MM/AAAA:\n");
        scanf("%s", &data);
    }
    dia = (data[0] - '0') * 10 + (data[1] - '0') * 1;
    mes = (data[3] - '0') * 10 + (data[4] - '0') * 1;
    ano = (data[6] - '0') * 1000 + (data[7] - '0') * 100 + (data[8] - '0') * 10 + (data[9] - '0') * 1;
    if(dia>29 && mes == 2){
        printf("Digite a data corretamente.\n");
        printf("Digite uma data no formato DD/MM/AAAA:\n");
        scanf("%s", &data);
        dia = (data[0] - '0') * 10 + (data[1] - '0') * 1;
        mes = (data[3] - '0') * 10 + (data[4] - '0') * 1;
        ano = (data[6] - '0') * 1000 + (data[7] - '0') * 100 + (data[8] - '0') * 10 + (data[9] - '0') * 1;
    }else{
        if(dia > 31 || mes > 12){
             printf("Digite a data corretamente.\n");
            printf("Digite uma data no formato DD/MM/AAAA:\n");
            scanf("%s", &data);
            dia = (data[0] - '0') * 10 + (data[1] - '0') * 1;
            mes = (data[3] - '0') * 10 + (data[4] - '0') * 1;
            ano = (data[6] - '0') * 1000 + (data[7] - '0') * 100 + (data[8] - '0') * 10 + (data[9] - '0') * 1;
        }
    }
    printf("%d do %d de %d", dia, mes, ano);
}