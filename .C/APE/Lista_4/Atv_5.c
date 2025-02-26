#include <stdio.h>

int VerificarNumero(){
    int num;
    do {
        printf("Digite um número inteiro e positivo: \n");
        scanf("%d", &num);
    } while (num <= 0);
    return num;
}
int SomaDivisores(int num) {
    int soma = 0;
    for(int i = 1; i < num; i++){
        if (num % i == 0){
            soma += i;
        }
    }
    return soma;
}

int main() {

    int numeros[5];

    for(int i = 1; i <= 5; i++){
        numeros[i] = VerificarNumero();
    }

    for (int i = 0; i < 5; i++){
        printf("%d", SomaDivisores(numeros[i]));
    }
    
    return 0;
}