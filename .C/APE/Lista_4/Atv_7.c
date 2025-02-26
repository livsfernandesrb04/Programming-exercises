#include <stdio.h>

int par_ou_impar(int a){
    if((a % 2) == 0){
        return 1;
    }
    else if{
        return 0;
    }
}

int main(){

    int num;

    printf("Insira um número inteiro: ");
    scanf("%d", &num);

    print("%d", par_ou_impar(num));

    return 0;
}