#include <stdio.h>

void conversor(int seg_ini){
    int horas = seg_ini / 3600;
    int seg_restantes = seg_ini % 3600;
    int minutos = seg_restantes / 60;
    int segundos = seg_restantes % 60;

    //Imprimir o resultado.
    printf("Tempo convertido: %d horas, %d minutos e %d segundos.\n", horas, minutos, segundos);
}

int main() {
    int seg_ini;

    printf("Insira os segundos que deseja converter: ");
    scanf("%d", &seg_ini);

    conversor(seg_ini);

    return 0;
}