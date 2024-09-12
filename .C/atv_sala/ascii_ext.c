#include <stdio.h>
//Biblioteca para ASCII extendida
#include <locale.h>

int main() {
    int i;
    setlocale(LC_ALL, "portuguese");
    
    printf("tabela ASCII extendida: ");

    for(i = 0; i < 256; i++) {
        printf("%d - %c\n", i, i);
    }

    return 0;

    //Biblioteca

}