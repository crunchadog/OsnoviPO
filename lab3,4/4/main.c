#include "stdio.h"

int main() {
    int min_value = 1;
    int max_value = 1000;
    int num;
    printf("Input a number:");
    scanf("%d", &num);
    int result = min_value <= num && num <= max_value;
    if (result) {
        printf("Num %d in range %d to %d: %s", num, min_value, max_value, "yes");
    } else {
        printf("Num %d in range %d to %d: %s", num, min_value, max_value, "no");
    }
}