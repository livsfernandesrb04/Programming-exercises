#include <stdio.h>
#include <time.h>
#include "nascimento.h"


int bissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}
int dias_no_mes(int mes, int ano) {
    int dias[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (mes == 2 && bissexto(ano)) {
        return 29;
    }
    return dias[mes - 1];
}
int dias_de_vida (data_t nasc){

    struct tm *data_hora_atual;     
    time_t segundos;
    time(&segundos);
    data_t dataAtual = localtime(&segundos);
    dataAtual.ano = tm_year+1900;
    dataAtual.mes = tm_mon+1;
    dataAtual.dia = tm_day;
    
    int anos = dataAtual.ano - nasc.ano;
    int meses = dataAtual.mes - nasc.mes;
    int dias = dataAtual.dia - nasc.dia;

    int total_de_dias = 0;

    if (dias < 0) {
        meses--;
        dias += dias_no_mes(dataAtual.mes - 1, dataAtual.ano);
    }
    if (meses < 0) {
        anos--;
        meses += 12;
    }

    int total_dias = 0;
    for (int i = nasc.ano; i < dataAtual.ano; i++) {
        total_dias += 365 + bissexto(i);
    }
    for (int i = 1; i < dataAtual.mes; i++) {
        total_dias += dias_no_mes(i, dataAtual.ano);
    }
    total_dias += dias;

    return total_dias;
}