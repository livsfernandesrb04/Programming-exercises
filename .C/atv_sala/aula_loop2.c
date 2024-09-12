#include <stdio.h>

int main() {
    
    float i, media, soma;
    int count;

    //Ler números reais maiores que zero
    do {
        printf("Insira um número: ");
        scanf("%f", &i);
    } while (i < 0);
    
    //Quando o zero for inserido o programa deve apresentar quantos números foram inseridos e a media destes
    if (i != 0){
        soma += i;
        count++;
    }
    else {
        media = soma/count;
        printf("Foram inseridos %d e a media desses numeros é %.1f", count, media);
    }

    return 0;
}