#include "stdio.h"
#include <string.h>
#include <stdbool.h>

int main() {
    bool f = false;
    char str1[20];
    char str2[20];
    scanf("%s", str1);
    scanf("%s", str2);

    for (int i = 0; i < strlen(str1); ++i) {
        if(str1[i] == str2[i]) {
            f = true;
        } else {
            f = false;
        }
    }

    if (f) {
        printf("String are equal");
    } else {
        printf("String aren`t equal");
    }

//    if (strcmp(str1, str2) == 0) {
//        printf("String are equal");
//    } else {
//        printf("String aren`t equal");
//    }
}
