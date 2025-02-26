#include <stdio.h>

int validar_int(int a) {
    if (a < 0) {
        return -1;
    }
    else if(a > 0){
        return 1;
    } 
    else{
        return 0;
    }
}

int main(){

    int num;

    printf("Insira um número inteiro: ");
    scanf("%d", &num);

    printf("%d", validar_int(num));

    return 0;
}