#include <stdio.h>

int menor_que(int a, int b){
    if(a < b){
        return a;
    }
    else if(b < a){
        return b;
    }
}

int main(){

    int num1, num2;

    do {
        printf("Insira um número inteiro: ");
        scanf("%d", &num1);
        printf("Insira um número inteiro: ");
        scanf("%d", &num2); 
    } while (num1 == num2);
    
    printf("O menor número é: %d", menor_que(num1, num2));

    return 0;
}