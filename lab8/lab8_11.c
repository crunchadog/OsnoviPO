#include "stdio.h"
#include <string.h>

int main() {
    char str[20];
    char str2[20];
    int counter = 0;
    scanf("%s", str);
    scanf("%s", str2);
    char *p;

    printf("First: %s\nSecond: %s\n", str, str2);
    for (p = str; *p; ++p) {
        if (strchr(str2, *p)) {
            printf("%c", *p);
            counter++;
        }
    }
    printf("\nTotal: %d", counter);
}