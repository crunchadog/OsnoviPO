#include "stdio.h"

int main() {
    int num;
    scanf("%d", &num);
    int array[num];

    for (int i = 0; i < num; ++i) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < num; ++i) {
        printf("Index: %d, num: %d\n", i, array[i]);
    }
}