#include <stdio.h>
#include "string.h"

int main() {
    char *str[10] = {"zero", "one", "two", "three", "four",
                    "five", "six", "seven", "eight", "nine"};
    int num;
    scanf("%d", &num);
    switch (num) {
        case 0:
            printf("%s", str[0]);
            break;
        case 1:
            printf("%s", str[1]);
            break;
        case 2:
            printf("%s", str[2]);
            break;
        case 3:
            printf("%s", str[3]);
            break;
        case 4:
            printf("%s", str[4]);
            break;
        case 5:
            printf("%s", str[5]);
            break;
        case 6:
            printf("%s", str[6]);
            break;
        case 7:
            printf("%s", str[7]);
            break;
        case 8:
            printf("%s", str[8]);
            break;
        case 9:
            printf("%s", str[9]);
            break;
        default:
            printf("Net number");
            break;
    }

}
