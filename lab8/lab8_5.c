#include "stdio.h"
#include <string.h>

int main() {
    char str1[20];
    char str2[0];
    scanf("%s", str1);
    for (int i = 0; i < strlen(str1); ++i) {
        str2[i] = str1[i];
    }
    printf("First string: %s\n", str1);
    printf("Second string: %s", str2);
}