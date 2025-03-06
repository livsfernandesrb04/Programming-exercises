#include <stdio.h>

int main() {
    int a = 0;

    do {
        printf("%d ", a);
        a = a + 2;
    } while (a <= 1000);

    return 0;
}