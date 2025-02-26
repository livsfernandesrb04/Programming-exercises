#include <stdio.h>

int absoluto(int num){
    if (num < 0){
        return -num;
    }
    else return num;
}

int main(){

    int numeros[5];

    printf("Digite 5 números inteiros: \n");
    for( int i = 0; i < 5; i++){
        scanf("%d", &numeros[i]);
    }

    printf("Os valores absolutos são:\n");
    for(int i = 0; i < 5; i++){
        printf("%d\n", absoluto(numeros[i]));
    }
    
     return 0;
    
}