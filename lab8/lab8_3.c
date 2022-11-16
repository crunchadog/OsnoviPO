#include "stdio.h"
#include <string.h>

int main() {
    char str1[20];
    char str2[20];
    scanf("%s", str1);
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0) {
        printf("String are equal");
    } else {
        printf("String aren`t equal");
    }
}