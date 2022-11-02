#include "stdio.h"
#include "stdlib.h"
int main() {
    int num;
    float *array;
    scanf("%d", &num);

    array = malloc(sizeof(float) * num);

    for (int i = 0; i < num; ++i) {
        scanf("%f", &array[i]);
    }

    for (int i = 0; i < num; ++i) {
        printf ("%.2f ", array[i]);
    }

    free(array);
}
