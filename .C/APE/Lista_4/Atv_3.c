#include <stdio.h>

int potenciacao(int a, int b){
    int potencia = 1;

    for(int i = 0; i < b; i++){
        potencia *= a;
    }
    return potencia;
}

int main() {

    int base, expoente;
    
    printf("Insira um número inteiro: ");
    scanf("%d", &base);
    printf("Insira um número inteiro: ");
    scanf("%d", &expoente); 

    printf("%d", potenciacao(base, expoente));

    return 0;
}
