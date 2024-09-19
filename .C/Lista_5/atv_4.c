#include <stdio.h>

float multiplicacao(float a, float x){
    float m;
    for (int i = 0; i < 10 ; i++)
    {
        m = a * x; 
    }
    return m;
}
int main(){

    float A[10];
    float M[10];
    float X;

    for (int i = 0; i < 10; i++)
    {
        printf("Insira um número: \n");
        scanf("%f", &A[i]);
    }
    printf("Insira o número multiplicador: \n");
    scanf("%f", &X);
    
    
    for (int i = 0; i < 10; i++)
    {
        M[i] = multiplicacao(A[i], X);
        printf("%.2f multiplicado por %.2f = %.2f\n", A[i], X, M[i]);
    }

    return 0;
}