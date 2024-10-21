#include <stdio.h>

int main() {
    float array[10] = {1.4, 8.4, 5.6, 0.2, 27.5, 48.0, 19.3, 5.9, 6.1, 73.2};

    for (int i = 0; i < 10; i++)
    {
        printf("posição %d: %p\n", i+1, &array[i]);
    }

    return 0;
}