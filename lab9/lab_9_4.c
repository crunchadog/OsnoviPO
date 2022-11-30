#include <stdio.h>
#include <stdbool.h>
#include "string.h"

bool isDigit(int num) {
    bool flag = true;

    for (int i = 2; i <= num;) {
        if (num % i == 0) {
            flag = false;
            break;
        }
        return flag;
    }
}

int main() {
    int num;
    scanf("%d", &num);
    for (int i = 2; i <= num; ++i) {
        if (isDigit(i)) {
            printf("%d ", i);
        }
    }
}
