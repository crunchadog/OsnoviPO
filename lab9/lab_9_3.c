#include <stdio.h>
#include "string.h"

int main() {
    char *str[10] = {"zero", "one", "two", "three", "four",
                     "five", "six", "seven", "eight", "nine"};
    int num;
    scanf("%d", &num);
    if (num > 9) {
        printf("Net number");
    }
    printf("%s", str[num]);
}
