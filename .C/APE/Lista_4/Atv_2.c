#include <stdio.h>
#include <math.h>

float calcularDistancia(float x1, float x2, float y1, float y2){
    float distancia = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    return distancia;
}
int main() {
    float x1, x2, y1, y2;

    printf("Insira as coordenadas de x1, x2, y1 e y2, respectivamente: ");
    scanf("%f %f %f %f", &x1, &x2, &y1, &y2);

    printf("A distância euclidiana é %.2f", calcularDistancia(x1,x2,y1,y2));

    return 0;
}