#include <stdio.h>
#include "string.h"

int main() {
    FILE *stream1, *stream2;
    freopen("answer.txt", "w", stdout);
    stream1 = fopen("input1.txt", "r");
    char arr[256];
    while ((fgets(arr, 256, stream1)) != NULL) {
        printf("%s", arr);
    }

    stream2 = fopen("input2.txt", "r");
    while ((fgets(arr, 256, stream2)) != NULL) {
        printf("%s", arr);
    }

    fclose(stream1);
    fclose(stream2);
}