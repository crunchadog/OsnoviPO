#include "stdio.h"

int main() {
    int num;
    scanf("%d", &num);
    float array[num];

    for (int i = 0; i < num; ++i) {
        scanf("%f", &array[i]);
    }

    for (int i = 0; i < num; ++i) {
        printf("%d = %.2f\n", i, *(array + i));
    }
}