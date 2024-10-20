#include <stdio.h>

int main() {
    int a = 13;
    float b = 10.4;
    char c = 'l';

    printf("Antes da modificação:\n");
    printf("%d, ", a);
    printf("%.2f, ", b);
    printf("%c\n", c);

    int* pont_a = &a ;
    float* pont_b = &b;
    char* pont_c = &c; 

    *pont_a = 24;
    *pont_b = 4.7;
    *pont_c = 'i';

    printf("Depois da modificação:\n");
    printf("%d, ", a);
    printf("%.2f, ", b);
    printf("%c\n", c);

    return 0;
}
