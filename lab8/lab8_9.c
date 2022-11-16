#include "stdio.h"
#include <string.h>

int main() {
    char symbol;
    scanf("%s", &symbol);
    char str[100];
    scanf("%s", str);
    for (int i = strlen(str); i >= 0; --i) {
        if (symbol == str[i]) {
            printf("Position: %d", i + 1);
            break;
        }
    }

}