#include "stdio.h"

int sum(int num) {
    if (num % 10 == 0) {
        return num;
    } else {
        return sum(num /10) + (num % 10);
    }
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d", sum(num));
}